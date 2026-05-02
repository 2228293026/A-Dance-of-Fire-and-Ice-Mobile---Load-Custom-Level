#include "universe.h"
#include "FilePicker.h"
#include "Logger.h"
#include "Cache.h"

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

extern JavaVM* g_vm;

static jclass g_javaFilePickerClass = nullptr;
static jmethodID g_initMethodID = nullptr;
static jmethodID g_showMethodID = nullptr;

static std::mutex g_pickerMutex;
static std::condition_variable g_pickerCV;
static bool g_pickerResultReady = false;
static std::string g_pickerSelectedPath;

extern "C" JNIEXPORT void JNICALL
Java_com_mod_filepicker_FilePicker_nativeOnFileSelected(JNIEnv* env, jclass,
                                                        jlong callbackPtr, jstring jpath) {
    const char* path = jpath ? env->GetStringUTFChars(jpath, nullptr) : nullptr;
    {
        std::lock_guard<std::mutex> lock(g_pickerMutex);
        g_pickerSelectedPath = (path != nullptr) ? path : "";
        g_pickerResultReady = true;
    }
    if (path) env->ReleaseStringUTFChars(jpath, path);
    g_pickerCV.notify_one();
}

void InitJavaFilePicker(JNIEnv* env) {
    jclass localClass = env->FindClass("com/mod/filepicker/FilePicker");
    if (!localClass) {
        LOGE("FilePicker class not found!");
        return;
    }
    g_initMethodID = env->GetStaticMethodID(localClass, "initialize", "(J)V");
    g_showMethodID = env->GetStaticMethodID(localClass, "show", "()V");
    if (!g_initMethodID || !g_showMethodID) {
        LOGE("Failed to get FilePicker method IDs");
        env->DeleteLocalRef(localClass);
        return;
    }
    g_javaFilePickerClass = (jclass)env->NewGlobalRef(localClass);
    env->DeleteLocalRef(localClass);
    env->CallStaticVoidMethod(g_javaFilePickerClass, g_initMethodID, (jlong)0);
    LOGD("FilePicker initialized");
}

std::string ShowFilePickerDialog(JNIEnv* env) {
    if (!g_javaFilePickerClass || !g_showMethodID) {
        LOGE("FilePicker not initialized");
        return "";
    }
    {
        std::lock_guard<std::mutex> lock(g_pickerMutex);
        g_pickerResultReady = false;
        g_pickerSelectedPath.clear();
    }
    env->CallStaticVoidMethod(g_javaFilePickerClass, g_showMethodID);

    std::unique_lock<std::mutex> lock(g_pickerMutex);
    g_pickerCV.wait(lock, []{ return g_pickerResultReady; });
    return g_pickerSelectedPath;
}

Array<String*>* Hooked_OpenFilePanel(String* title, String* directory, String* extension, bool multiselect) {
    JNIEnv* env = nullptr;
    bool attached = false;
    jint res = g_vm->GetEnv((void**)&env, JNI_VERSION_1_6);
    if (res == JNI_EDETACHED) {
        g_vm->AttachCurrentThread(&env, nullptr);
        attached = true;
    } else if (res != JNI_OK) {
        return nullptr;
    }

    std::string filePath = ShowFilePickerDialog(env);
    if (attached) g_vm->DetachCurrentThread();

    if (filePath.empty()) {
        LOGW("File picker cancelled or no file selected");
        return nullptr;
    }

    LOGD("Selected level path: %s", filePath.c_str());

    auto array = g_stringClass.NewArray<String*>(1);
    if (!array) {
        LOGE("Failed to create string array");
        return nullptr;
    }
    array->m_Items[0] = CreateMonoString(filePath);

    LOGD("Returning file path to Unity: %s", array->m_Items[0]->str().c_str());
    return array;
}

void InstallFilePickerHook() {
    auto browserClass = Class("SFB", "StandaloneFileBrowser");
    auto openFilePanel = browserClass.GetMethod("OpenFilePanel", {"title","directory","extension","multiselect"});
    if (!openFilePanel.IsValid()) {
        LOGE("Failed to find StandaloneFileBrowser.OpenFilePanel");
        return;
    }
    BasicHook(openFilePanel, Hooked_OpenFilePanel, (void*)nullptr);
    LOGD("OpenFilePanel hook installed");
}
