#include "universe.h"
#include "FilePicker.h"
#include "Logger.h"
#include "Cache.h"

#include <thread>
#include <chrono>
#include <string>

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

extern JavaVM* g_vm;

// ---- 我们自己的 ClassLoader（用于定位 classes2.dex 里的自研类）----
static jobject g_ourClassLoader = nullptr; // 全局引用，常驻

// 找到当前 Context（通过 ActivityThread.currentActivityThread 反射）
static jobject GetCurrentContext(JNIEnv* env) {
    // ActivityThread.currentApplication() 返回全局 Application（Context）
    jclass atClass = env->FindClass("android/app/ActivityThread");
    if (!atClass) { env->ExceptionClear(); return nullptr; }
    jmethodID curApp = env->GetStaticMethodID(atClass, "currentApplication",
                                              "()Landroid/app/Application;");
    if (!curApp) { env->ExceptionClear(); return nullptr; }
    jobject app = env->CallStaticObjectMethod(atClass, curApp);
    if (env->ExceptionCheck()) { env->ExceptionClear(); return nullptr; }
    return app; // local ref to Context
}

// RuntimeDexLoader：用 DexClassLoader 加载 APK 内 classes2.dex（self-module 的 dex）
// 并缓存 ClassLoader，供 FindClass 使用。
static void LoadSecondaryDex(JNIEnv* env) {
    if (g_ourClassLoader) return; // 已加载过

    jobject ctx = GetCurrentContext(env);
    if (!ctx) { LOGE("[DexLoad] no context"); return; }

    // ctx.getApplicationInfo();  -> ApplicationInfo (has sourceDir)
    jclass contextCls = env->FindClass("android/content/Context");
    jmethodID getAppInfo = env->GetMethodID(contextCls, "getApplicationInfo",
                                            "()Landroid/content/pm/ApplicationInfo;");
    if (!getAppInfo) { env->ExceptionClear(); env->DeleteLocalRef(ctx); return; }
    jobject appInfo = env->CallObjectMethod(ctx, getAppInfo);
    if (env->ExceptionCheck()) { env->ExceptionClear(); env->DeleteLocalRef(ctx); return; }

    // ApplicationInfo.sourceDir (public String)
    jclass appInfoCls = env->FindClass("android/content/pm/ApplicationInfo");
    jfieldID sourceDirField = env->GetFieldID(appInfoCls, "sourceDir", "Ljava/lang/String;");
    if (!sourceDirField) { env->ExceptionClear(); /* fallthrough */ }
    jstring sourceDir = sourceDirField ? (jstring)env->GetObjectField(appInfo, sourceDirField) : nullptr;

    // ctx.getCodeCacheDir().getAbsolutePath()
    jmethodID getCodeCache = env->GetMethodID(contextCls, "getCodeCacheDir", "()Ljava/io/File;");
    if (!getCodeCache) { env->ExceptionClear(); }
    jobject codeCacheFile = getCodeCache ? env->CallObjectMethod(ctx, getCodeCache) : nullptr;
    if (env->ExceptionCheck()) env->ExceptionClear();

    jstring optDir = nullptr;
    if (codeCacheFile) {
        jclass fileCls = env->FindClass("java/io/File");
        jmethodID getAbs = env->GetMethodID(fileCls, "getAbsolutePath", "()Ljava/lang/String;");
        if (getAbs) {
            optDir = (jstring)env->CallObjectMethod(codeCacheFile, getAbs);
            if (env->ExceptionCheck()) env->ExceptionClear();
        }
    }

    // ctx.getClassLoader()
    jmethodID getCL = env->GetMethodID(contextCls, "getClassLoader", "()Ljava/lang/ClassLoader;");
    if (!getCL) { env->ExceptionClear(); }
    jobject parentLoader = getCL ? env->CallObjectMethod(ctx, getCL) : nullptr;
    if (env->ExceptionCheck()) env->ExceptionClear();

    if (!sourceDir) {
        LOGE("[DexLoad] sourceDir is null, cannot load classes2.dex");
        env->DeleteLocalRef(ctx); env->DeleteLocalRef(appInfo);
        if (codeCacheFile) env->DeleteLocalRef(codeCacheFile);
        return;
    }

    // new DexClassLoader(sourceDir, optDir, null, parentLoader)
    jclass dexCls = env->FindClass("dalvik/system/DexClassLoader");
    jmethodID dexCtor = env->GetMethodID(dexCls, "<init>",
        "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V");
    if (!dexCtor) { env->ExceptionClear(); }
    jobject loader = nullptr;
    if (dexCtor) {
        // librarySearchPath 参数传 NULL
        jobject libPath = NULL;
        loader = env->NewObject(dexCls, dexCtor, sourceDir, optDir, libPath, parentLoader);
    }
    if (env->ExceptionCheck()) { env->ExceptionClear(); loader = nullptr; }

    if (!loader) {
        LOGE("[DexLoad] DexClassLoader failed");
        env->DeleteLocalRef(ctx); env->DeleteLocalRef(appInfo);
        return;
    }

    // 触发加载 classes2.dex 内的类
    jclass classCls = env->FindClass("java/lang/Class");
    jmethodID forName = env->GetStaticMethodID(classCls, "forName",
        "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
    if (forName) {
        jstring clsName = env->NewStringUTF("com.unity3d.player.FileSelector");
        env->CallStaticObjectMethod(classCls, forName, clsName, JNI_TRUE, loader);
        if (env->ExceptionCheck()) {
            env->ExceptionClear();
            LOGW("[DexLoad] forName FileSelector failed (class not in classes2?), trying next");
        }
        env->DeleteLocalRef(clsName);
    }

    g_ourClassLoader = env->NewGlobalRef(loader);
    LOGD("[DexLoad] classes2.dex loaded & ClassLoader cached");

    env->DeleteLocalRef(loader);
    env->DeleteLocalRef(ctx);
    env->DeleteLocalRef(appInfo);
    if (codeCacheFile) env->DeleteLocalRef(codeCacheFile);
    if (optDir) env->DeleteLocalRef(optDir);
    if (sourceDir) env->DeleteLocalRef(sourceDir);
}

// 用我们缓存的 ClassLoader 查找类（优先），找不到再退回默认 FindClass
static jclass LoadClass(JNIEnv* env, const char* name) {
    if (g_ourClassLoader) {
        jclass classCls = env->FindClass("java/lang/Class");
        jmethodID forName = env->GetStaticMethodID(classCls, "forName",
            "(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;");
        if (forName) {
            jstring n = env->NewStringUTF(name);
            jobject c = env->CallStaticObjectMethod(classCls, forName, n, JNI_TRUE, g_ourClassLoader);
            env->DeleteLocalRef(n);
            env->DeleteLocalRef(classCls);
            if (!env->ExceptionCheck() && c) {
                jclass ret = (jclass)env->NewGlobalRef(c);
                env->DeleteLocalRef(c);
                return ret;
            }
            env->ExceptionClear();
        }
    }
    jclass cls = env->FindClass(name);
    if (env->ExceptionCheck()) env->ExceptionClear();
    return cls;
}

// ---- 文件选择器桥接（com.unity3d.player.FileSelector，由我们自己加载）----
static jclass  g_selectorClass = nullptr;
static jmethodID g_method_selectFile = nullptr;
static jfieldID  g_field_isDone = nullptr;
static jmethodID g_method_getFilePath = nullptr;

static std::mutex g_pickerMutex;
static std::condition_variable g_pickerCV;
static bool g_pickerResultReady = false;
static std::string g_pickerSelectedPath;

// 轮询等待 Selector 结果（在独立线程运行，避免阻塞 UI 线程）
static void WaitForJavaPickerResult() {
    JNIEnv* env = nullptr;
    bool attached = false;
    jint res = g_vm->GetEnv((void**)&env, JNI_VERSION_1_6);
    if (res == JNI_EDETACHED) {
        g_vm->AttachCurrentThread(&env, nullptr);
        attached = true;
    } else if (res != JNI_OK || !env) {
        return;
    }

    {
        jstring typeStr = env->NewStringUTF("adofai,zip");
        env->CallStaticVoidMethod(g_selectorClass, g_method_selectFile, typeStr);
        env->DeleteLocalRef(typeStr);
        if (env->ExceptionCheck()) env->ExceptionClear();
    }

    constexpr int kMaxTries = 2000;
    int tries = 0;
    bool done = false;
    while (!done && tries < kMaxTries) {
        std::this_thread::sleep_for(std::chrono::milliseconds(80));
        tries++;
        if (g_selectorClass && g_field_isDone) {
            jboolean isDone = env->GetStaticBooleanField(g_selectorClass, g_field_isDone);
            if (env->ExceptionCheck()) { env->ExceptionClear(); break; }
            done = (isDone == JNI_TRUE);
        } else {
            break;
        }
    }

    if (done && g_method_getFilePath) {
        jstring jpath = (jstring)env->CallStaticObjectMethod(g_selectorClass, g_method_getFilePath);
        if (env->ExceptionCheck()) {
            env->ExceptionClear();
        } else if (jpath) {
            const char* cpath = env->GetStringUTFChars(jpath, nullptr);
            if (cpath) {
                {
                    std::lock_guard<std::mutex> lock(g_pickerMutex);
                    g_pickerSelectedPath = cpath;
                    g_pickerResultReady = true;
                }
                g_pickerCV.notify_one();
                env->ReleaseStringUTFChars(jpath, cpath);
            }
            env->DeleteLocalRef(jpath);
        }
    } else if (!done) {
        {
            std::lock_guard<std::mutex> lock(g_pickerMutex);
            g_pickerSelectedPath.clear();
            g_pickerResultReady = true;
        }
        g_pickerCV.notify_one();
    }

    if (attached) g_vm->DetachCurrentThread();
}

// ---- OpenFilePanel 的替换实现 ----
Array<String*>* Hooked_OpenFilePanel(String* title, String* directory, String* extension, bool multiselect) {
    if (!g_selectorClass || !g_method_selectFile) {
        LOGE("FileSelector bridge not initialized");
        return nullptr;
    }

    {
        std::lock_guard<std::mutex> lock(g_pickerMutex);
        g_pickerResultReady = false;
        g_pickerSelectedPath.clear();
    }

    std::thread waiter(WaitForJavaPickerResult);
    waiter.detach();

    std::unique_lock<std::mutex> lock(g_pickerMutex);
    g_pickerCV.wait(lock, []{ return g_pickerResultReady; });
    std::string filePath = g_pickerSelectedPath;
    lock.unlock();

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

// 初始化 Java FileSelector 桥接（先挂载 classes2.dex 再用我们的 loader 找类）
void InitJavaFilePicker(JNIEnv* env) {
    if (!env) return;

    // 【二分调试】先注释掉 LoadSecondaryDex，确认是否为 dex 挂载导致崩溃。
    LoadSecondaryDex(env);

    // 用我们的 loader 定位 FileSelector（若 LoadSecondaryDex 被注释，则回退到默认 FindClass）
    jclass c = LoadClass(env, "com/unity3d/player/FileSelector");
    if (!c) {
        LOGE("FileSelector class not found (dex not loaded?)");
        return;
    }
    g_method_selectFile     = env->GetStaticMethodID(c, "selectFile", "(Ljava/lang/String;)V");
    g_field_isDone          = env->GetStaticFieldID(c, "isDone", "Z");
    g_method_getFilePath    = env->GetStaticMethodID(c, "getFilePath", "()Ljava/lang/String;");
    if (!g_method_selectFile || !g_field_isDone || !g_method_getFilePath) {
        if (env->ExceptionCheck()) env->ExceptionClear();
        env->DeleteLocalRef(c);
        LOGE("Failed to get FileSelector method/field IDs");
        return;
    }
    g_selectorClass = (jclass)env->NewGlobalRef(c);
    env->DeleteLocalRef(c);
    LOGD("FileSelector bridge initialized (via custom dex loader)");
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
