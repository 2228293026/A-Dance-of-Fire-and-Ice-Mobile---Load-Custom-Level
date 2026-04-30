#include <jni.h>
#include "universe.h"
#include <sys/mman.h>
#include <unistd.h>
#include "Enum/HitboxType.h"
#include "Enum/HitMargin.h"
#include "Enum/LevelEventType.h"
#include "Enum/DifficultyUIMode.h"
#include <limits>
#include <mutex>
#include <condition_variable>
#include <string>
#include <chrono>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdio>

using namespace std;
using namespace BNM;
using namespace BNM::Operators;
using namespace IL2CPP;
using namespace BNM::UnityEngine;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;
using namespace BNM::IL2CPP;
using namespace BNM::Defaults;

#define LOG_TAG "IL2CPP_EXPORTS"

/*
#if defined(__aarch64__)
#define ARM64_CALL __attribute__((pcs("aapcs")))
#else
#define ARM64_CALL
#endif    
*/
uintptr_t G_IL2CPP;
Image unityCore;
Image assembly_csharp;
Image unityUI;

// Function forward declarations
void InitJavaFilePicker(JNIEnv* env);
void InstallFilePickerHook();
Field<bool> UseNoFail{};

// ============ Java 文件选择器相关全局变量 ============
static JavaVM* g_vm = nullptr;                    // JNI VM
static jclass g_javaFilePickerClass = nullptr;    // GlobalRef of FilePicker class
static jmethodID g_initMethodID = nullptr;        // FilePicker.initialize
static jmethodID g_showMethodID = nullptr;        // FilePicker.show

// 同步机制：阻塞等待文件选择器返回
static std::mutex g_pickerMutex;
static std::condition_variable g_pickerCV;
static bool g_pickerResultReady = false;
static std::string g_pickerSelectedPath;

// ============ 文件日志相关 ============
static std::ofstream g_logFile;
static std::mutex g_logMutex;
static std::string g_logPath = "/sdcard/adofai_mod.log";

// 写入日志到文件（需要在全局变量声明后才能定义）
void LogToFile(const char* format, ...) {
    std::lock_guard<std::mutex> lock(g_logMutex);
    if (!g_logFile.is_open()) return;

    // 获取当前时间
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
                  now.time_since_epoch()) % 1000;

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S");
    oss << '.' << std::setfill('0') << std::setw(3) << ms.count();
    oss << " ";

    // 格式化消息
    char buffer[1024];
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    oss << buffer << std::endl;
    g_logFile << oss.str();
    g_logFile.flush();
}

// 重新定义日志宏，同时输出到 logcat 和文件
#undef LOGD
#undef LOGE
#undef LOGW
#define LOGD(...) do { __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)
#define LOGE(...) do { __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)
#define LOGW(...) do { __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, [[maybe_unused]] void *reserved) {
    JNIEnv *env;
    if (vm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        LOGE("Failed to get JNIEnv");
        return JNI_ERR;
    }

    g_vm = vm;  // 保存全局 JavaVM

    // 尝试打开日志文件
    g_logFile.open(g_logPath, std::ios::app);
    if (g_logFile.is_open()) {
        LOGD("Log file opened: %s", g_logPath.c_str());
    } else {
        LOGE("Failed to open log file: %s", g_logPath.c_str());
    }

    BNM::Loading::TryLoadByJNI(env);
    BNM::Loading::AddOnLoadedEvent([]() {
        // IL2CPP 加载完成后执行
        start();  // 保留原有的 start 逻辑

        // 初始化 Java FilePicker 并安装 Hook
        JNIEnv* env = nullptr;
        bool attached = false;
        if (g_vm->GetEnv((void**)&env, JNI_VERSION_1_6) != JNI_OK) {
            g_vm->AttachCurrentThread(&env, nullptr);
            attached = true;
        }

        if (env) {
            InitJavaFilePicker(env);
            InstallFilePickerHook();
        }

        if (attached) {
            g_vm->DetachCurrentThread();
        }
    });

    return JNI_VERSION_1_6;
}


template <typename T>
T callMethod(std::string nameSpace, std::string className, std::string methodName, Il2CppObject *instance) {
    //LOGD("Calling method %s::%s::%s", nameSpace.c_str(), className.c_str(), methodName.c_str());
    Class clazz = Class(nameSpace, className);
    Method<T> method = clazz.GetMethod(methodName);
    if (instance == nullptr) {
        T result = method.Call();
        //LOGD("Method called successfully, result: %p", (void*)result);
        return result;
    }
    T result = method[instance].Call();
    //LOGD("Method called successfully, result: %p", (void*)result);
    return result;
}

template <typename T>
T getFieldValue(std::string NS, std::string className, std::string fieldName, Il2CppObject *instance) {
    //LOGD("Getting field %s::%s::%s", NS.c_str(), className.c_str(), fieldName.c_str());
    Class clazz = Class(NS, className);
    Field<T> field = clazz.GetField(fieldName);
    if (instance == nullptr) {
        T result = field.Get();
        //LOGD("Field value: %p", (void*)result);
        return result;
    }
    T result = field[instance].Get();
    //LOGD("Field value: %p", (void*)result);
    return result;
}

void SetActive(UnityEngine::Object* gameObject, bool active) {
    //LOGD("Setting active: %p -> %d", gameObject, active);
    auto gameObjectClass = Class("UnityEngine", "GameObject");
    Method<void> setActiveMethod = gameObjectClass.GetMethod("SetActive", {"value"});
    setActiveMethod[gameObject].Call(active);
    //LOGD("SetActive completed");
}

UnityEngine::Object* GetGameObject(UnityEngine::Object* component) {
    //LOGD("Getting GameObject from component: %p", component);
    Class componentClass = Class("UnityEngine", "Component");
    Property<UnityEngine::Object*> getGameObjectMethod = componentClass.GetProperty("gameObject");
    UnityEngine::Object* result = getGameObjectMethod[component].Get();
    //LOGD("GameObject: %p", result);
    return result;
}

void *Il2CppGetMethodOffset(Il2CppImage *image, const char *namespaze, const char *clazz, const char *name, int argsCount) {
    LOGD("Getting method offset: %s::%s::%s (args: %d)", namespaze, clazz, name, argsCount);
    auto klass = Class(namespaze, clazz, image);
    auto method = klass.GetMethod(name, argsCount);
    void* result = (void*)method._data->methodPointer;
    LOGD("Method offset: %p", result);
    return result;
}

size_t Il2CppGetFieldOffset(Il2CppImage *image, const char *namespaze, const char *clazz, const char *name) {
    LOGD("Getting field offset: %s::%s::%s", namespaze, clazz, name);
    auto klass = Class(namespaze, clazz, image);
    auto field = klass.GetField(name);
    size_t result = field.GetOffset();
    LOGD("Field offset: %zu", result);
    return result;
}

uintptr_t GetIL2CPPBase() {
    static uintptr_t base = 0;
    if (base == 0) {
        LOGD("Getting IL2CPP base address");
        Dl_info info;
        auto adr = (BNM_PTR) BNM::Internal::GetIl2CppMethod(BNM_OBFUSCATE_TMP(BNM_IL2CPP_API_il2cpp_domain_get_assemblies));
        if (dladdr((void *) adr, &info)) {
            base = reinterpret_cast<uintptr_t>(info.dli_fbase);
            LOGD("IL2CPP base: %p", (void*)base);
        } else {
            LOGE("Failed to get IL2CPP base address");
        }
    }
    return base;
}

// Forward declarations
void InitJavaFilePicker(JNIEnv* env);
void InstallOpenLevelHook();

// ============ JNI 回调：Java 调用 ============
extern "C" JNIEXPORT void JNICALL
Java_com_mod_filepicker_FilePicker_nativeOnFileSelected(JNIEnv* env, jclass,
                                                        jlong callbackPtr, jstring jpath) {
    // callbackPtr 目前未使用，但需要接收以匹配签名
    const char* path = jpath ? env->GetStringUTFChars(jpath, nullptr) : nullptr;
    {
        std::lock_guard<std::mutex> lock(g_pickerMutex);
        g_pickerSelectedPath = (path != nullptr) ? path : "";
        g_pickerResultReady = true;
    }
    if (path) env->ReleaseStringUTFChars(jpath, path);
    LOGD("nativeOnFileSelected: callbackPtr=%lld, path=%s", (long long)callbackPtr, g_pickerSelectedPath.c_str());
    g_pickerCV.notify_one();
}

// ============ 初始化 Java FilePicker 类 ============
void InitJavaFilePicker(JNIEnv* env) {
    LOGD("Initializing Java FilePicker...");

    // 查找类
    jclass localClass = env->FindClass("com/mod/filepicker/FilePicker");
    if (!localClass) {
        LOGE("FilePicker class not found!");
        return;
    }
    LOGD("FilePicker class found: %p", localClass);

    // 检查类是否真的是我们想要的
    jclass classClass = env->GetObjectClass(localClass);
    jmethodID toString = env->GetMethodID(classClass, "toString", "()Ljava/lang/String;");
    if (toString) {
        jstring jname = (jstring)env->CallObjectMethod(localClass, toString);
        const char* name = env->GetStringUTFChars(jname, nullptr);
        LOGD("FilePicker class name: %s", name);
        env->ReleaseStringUTFChars(jname, name);
        env->DeleteLocalRef(jname);
    }
    env->DeleteLocalRef(classClass);

    // 获取 initialize 方法 ID
    g_initMethodID = env->GetStaticMethodID(localClass, "initialize", "(J)V");
    LOGD("GetStaticMethodID initialize: %p", g_initMethodID);
    if (!g_initMethodID) {
        // 尝试其他签名
        jmethodID m = env->GetStaticMethodID(localClass, "initialize", "(JJ)V");
        LOGD("Tried (J)V: %p, (JJ)V: %p", g_initMethodID, m);
    }

    // 获取 show 方法 ID
    g_showMethodID = env->GetStaticMethodID(localClass, "show", "()V");
    LOGD("GetStaticMethodID show: %p", g_showMethodID);

    if (!g_initMethodID || !g_showMethodID) {
        LOGE("Failed to get FilePicker method IDs (init=%p, show=%p)", g_initMethodID, g_showMethodID);
        env->DeleteLocalRef(localClass);
        return;
    }

    // 保存全局类引用
    g_javaFilePickerClass = (jclass)env->NewGlobalRef(localClass);
    LOGD("Created global ref: %p", g_javaFilePickerClass);
    env->DeleteLocalRef(localClass);

    // 调用 initialize
    env->CallStaticVoidMethod(g_javaFilePickerClass, g_initMethodID, (jlong)0);
    LOGD("FilePicker initialized (callbackPtr=0)");
}

// ============ 显示文件选择器（阻塞等待） ============
std::string ShowFilePickerDialog(JNIEnv* env) {
    if (!g_javaFilePickerClass || !g_showMethodID) {
        LOGE("FilePicker not initialized");
        return "";
    }

    // 重置状态
    {
        std::lock_guard<std::mutex> lock(g_pickerMutex);
        g_pickerResultReady = false;
        g_pickerSelectedPath.clear();
    }

    // 调用 Java show()
    env->CallStaticVoidMethod(g_javaFilePickerClass, g_showMethodID);

    // 阻塞等待回调（最多30秒）
    std::unique_lock<std::mutex> lock(g_pickerMutex);
    bool waited = g_pickerCV.wait_for(lock, std::chrono::seconds(30),
                                      []{ return g_pickerResultReady; });
    if (!waited) {
        LOGW("File picker timeout");
        return "";
    }

    return g_pickerSelectedPath;
}

// ============ Hook 函数：StandaloneFileBrowser.OpenFilePanel ============
// 原函数签名: public static String[] OpenFilePanel(String title, String directory, String extension, Boolean multiselect)
void* Hooked_OpenFilePanel(BNM::IL2CPP::Il2CppString* title, BNM::IL2CPP::Il2CppString* directory,
                           BNM::IL2CPP::Il2CppString* extension, bool multiselect) {
    LOGD("Hooked StandaloneFileBrowser.OpenFilePanel called");
    LOGD("  title: %p, directory: %p, extension: %p, multiselect: %d",
         title, directory, extension, (int)multiselect);

    // JNI 环境
    JNIEnv* env = nullptr;
    bool attached = false;
    jint res = g_vm->GetEnv((void**)&env, JNI_VERSION_1_6);
    if (res == JNI_EDETACHED) {
        g_vm->AttachCurrentThread(&env, nullptr);
        attached = true;
    } else if (res != JNI_OK) {
        LOGE("Failed to get JNIEnv");
        return nullptr;
    }

    // 显示文件选择器，获取选中的路径
    std::string filePath = ShowFilePickerDialog(env);

    if (attached) {
        g_vm->DetachCurrentThread();
    }

    if (filePath.empty()) {
        LOGD("File picker cancelled or failed, returning null");
        return nullptr;
    }

    LOGD("File selected: %s", filePath.c_str());

    // 构造 String[] 数组，包含选中的路径
    try {
        // 尝试获取 String 类
        Class stringClass = Class("System", "String");
        if (!stringClass.IsValid()) {
            LOGE("Failed to get String class (not in System)");
            return nullptr;
        }
        LOGD("String class found: %p", stringClass._data);

        // 使用 BNM 内部的 IL2CPP 函数指针来创建数组和字符串
        auto array = BNM::Internal::il2cppMethods.il2cpp_array_new(stringClass._data, 1);
        if (!array) {
            LOGE("Failed to create string array");
            return nullptr;
        }

        auto il2cppPath = BNM::Internal::il2cppMethods.il2cpp_string_new(filePath.c_str());

        // 直接设置数组第一个元素。
        // Il2CppArray 内存布局：Il2CppObject + bounds + capacity + T m_Items[0]
        auto items = reinterpret_cast<String**>(
            reinterpret_cast<uintptr_t>(array) + sizeof(IL2CPP::Il2CppObject) + sizeof(void*) + sizeof(size_t)
        );
        items[0] = il2cppPath;

        LOGD("Created string array with path: %s", filePath.c_str());
        return array;
    } catch (const std::exception& e) {
        LOGE("Exception in Hooked_OpenFilePanel: %s", e.what());
        return nullptr;
    }
}

// ============ Hook 初始化 ============
void InstallFilePickerHook() {
    LOGD("Installing StandaloneFileBrowser.OpenFilePanel hook...");

    try {
        // StandaloneFileBrowser 在 Assembly-CSharp-firstpass
        auto browserClass = Class("SFB", "StandaloneFileBrowser");
        auto openFilePanel = browserClass.GetMethod("OpenFilePanel",{"title","directory","extension","multiselect"});  // 4 parameters: title, directory, extension, multiselect
        if (!openFilePanel.IsValid()) {
            LOGE("Failed to find StandaloneFileBrowser.OpenFilePanel()");
            return;
        }

        // 使用 BasicHook 安装 hook
        BNM::BasicHook(openFilePanel, Hooked_OpenFilePanel, (void*)nullptr);
        LOGD("OpenFilePanel hook installed successfully");
    } catch (const std::exception& e) {
        LOGE("Exception in InstallFilePickerHook: %s", e.what());
    }
}


bool IsEditorMet() {
    return true;
}

void (*old_ADOStartup_Startup)(UnityEngine::Object *);
void ADOFAIStart(UnityEngine::Object *instance) {
    old_ADOStartup_Startup(instance);
    Field<bool> initialized = Class("","DLCManager").GetField("initialized");
    initialized.Set(true);
}
Color white()
{
    return Color(1,1,1,1);
}
Color gray()
{
    return Color(0.5,0.5,0.5,1);
}
Color red()
{
    return Color(1,0,0,1);
}
void (*old_OttoButtonController_Update)(UnityEngine::Object* );
void OttoButtonController_Update(UnityEngine::Object* instance) {
    old_OttoButtonController_Update(instance);
    Class ADOBaseClass = Class("", "ADOBase");
    Field<UnityEngine::Object*> ottoButtonField = Class("", "OttoButtonController")
    .GetField("button");
    Property<bool> autoPro = Class("", "RDC").GetProperty("auto");
    Method<UnityEngine::Object*> get_controller = ADOBaseClass.GetMethod("get_controller");
    Field<bool> gameworld = Class("", "scrController").GetField("gameworld");
    if (get_controller.Call() != nullptr && gameworld[get_controller.Call()].Get())
    {
        UnityEngine::Object* ottoButtonObj = ottoButtonField[instance].Get();
        Class componentClass = Class("UnityEngine", "Component");
        Method<UnityEngine::Object*> getGameObject = componentClass
        .GetMethod("get_gameObject");
        UnityEngine::Object* gameObject = getGameObject[ottoButtonObj].Call();
        SetActive(gameObject, true);
        UnityEngine::Object* customLevel = callMethod<UnityEngine::Object *>("","ADOBase","get_customLevel");
        Field <float> highBPM = Class("","scnGame").GetField("highestBPM");
        Class GraphicClass = Class("UnityEngine.UI", "Graphic");
        Class SelectableClass = Class("UnityEngine.UI", "Selectable");
        Property<UnityEngine::Object*> image = SelectableClass.GetProperty("image");
        UnityEngine::Object* imageObj = image[ottoButtonObj].Get();
        Property<Color> color = GraphicClass.GetProperty("color");
        if (autoPro.Get()) {
                color[imageObj].Set(highBPM[customLevel].Get() >= 300 ? red() : white());
            } else {
                Color grayColor = gray();
                Color redColor = red();
                Color mixedColor = Color(
                        grayColor.r * redColor.r,
                        grayColor.g * redColor.g,
                        grayColor.b * redColor.b,
                        grayColor.a * redColor.a
                );
                color[imageObj].Set(highBPM[customLevel].Get() >= 300 ? mixedColor : gray());
        }
    }
}
//屏蔽判定文本
void (*old_scrController_ShowHitText)(UnityEngine::Object *,HitMargin,Vector3,float);
void ShowHitTextMet(UnityEngine::Object *instance,HitMargin hitMargin,Vector3 position,float angle) {
    if (hitMargin != HitMargin::Perfect)
         old_scrController_ShowHitText(instance,hitMargin,position,angle);
}
String* dlc() {
    return CreateMonoString("/sdcard/DLC/Bundles");
}
bool (*old_isMobile)();
bool IsMobile() {
    Method<String*> sceneName = Class("","ADOBase").GetMethod("get_sceneName");
    if (sceneName.Call()->str() == "scnTaroMenu0" || sceneName.Call()->str() == "scnTaroMenu1" || sceneName.Call()->str() == "scnTaroMenu2" || sceneName.Call()->str() == "scnTaroMenu3") {
        return false;
    } else {
        return old_isMobile();
    }
}
DifficultyUIMode DetermineDifficultyUIModeMet() {
    return DifficultyUIMode::ShowAll;
}
void (*old_QuitToMainMenu)(UnityEngine::Object *);
void QuitToMainMenuMet(UnityEngine::Object *instance) {
    old_QuitToMainMenu(instance);
    auto GCS = Class("","GCS");
    auto ADOBase = Class("","ADOBase");
    Method<bool> get_isScnGame = ADOBase.GetMethod("get_isScnGame");
	Field<String*> customLevelPaths = GCS.GetField("customLevelPaths");
	Field<String*>  internalLevelName = GCS.GetField("internalLevelName");
    Field<String*> sceneToLoad  = GCS.GetField("sceneToLoad");
    if (get_isScnGame.Call()) sceneToLoad = CreateMonoString("scnMobileMenu"),
	internalLevelName.Set(nullptr),customLevelPaths.Set(nullptr);
    UseNoFail = GCS.GetField("useNoFail");
    UseNoFail.Set(false);
}
void (*old_scrController_Restart)(UnityEngine::Object *);
void RestartMet(UnityEngine::Object *instance) {
    old_scrController_Restart(instance);
    auto GCSClass = Class("","GCS");
    UseNoFail = GCSClass.GetField("useNoFail");
    auto ADOBase = Class("","ADOBase");
    Method<String*> sceneName = Class("","ADOBase").GetMethod("get_sceneName");
    Method<bool> GetisOfficialLevel = ADOBase.GetMethod("get_isOfficialLevel");
    Method<bool> GetisScnGame = ADOBase.GetMethod("get_isScnGame");
    if (GetisScnGame.Call() && !GetisOfficialLevel.Call()) {
        UseNoFail.Set(!UseNoFail.Get());
    } else {
        UseNoFail.Set(false);
    }
}
void (*old_scnGame_Play)(UnityEngine::Object *);
void PlayMet(UnityEngine::Object *instance) {
    old_scnGame_Play(instance);
    UnityEngine::Object* internalData = getFieldValue<UnityEngine::Object *>("","RDConstants","internalData");
    auto GCSClass = Class("","GCS");
    UseNoFail = GCSClass.GetField("useNoFail");
    auto ADOBase = Class("","ADOBase");
    Method<bool> GetisOfficialLevel = ADOBase.GetMethod("get_isOfficialLevel");
    if (GetisOfficialLevel.Call()) UseNoFail.Set(false);
}
bool RDC_forceUnlockAllLevelsMet() {
    return true;
}

bool TaroDLCCheckMet() {
    return true;
}

bool IsUnityEditorMet() {
    return true;
}
bool scrPlanet_GetMultipressPenaltyMet() {
    return false;
}
void (*old_scrRing_Update)(UnityEngine::Object* );
void scrRing_Update(UnityEngine::Object* instance) {
    old_scrRing_Update(instance);
    Method<UnityEngine::Object*> get_transform = Class("UnityEngine", "Component")
    .GetMethod("get_transform");
    UnityEngine::Object* transform = get_transform[instance].Call();
    Property<Vector3> localScaleProp = Class("UnityEngine", "Transform").GetProperty("localScale");
    localScaleProp[transform].Set(Vector3::zero);
}
void (*old_scrUIController_Update)(UnityEngine::Object* );
void scrUIController_Update(UnityEngine::Object* instance) {
    old_scrUIController_Update(instance);
    Field<UnityEngine::Object*>pauseButton = Class("","scrUIController").GetField("pauseButton");
    UnityEngine::Object* b = pauseButton[instance].Get();
    UnityEngine::Object* buttonGameObject = GetGameObject(b);
    SetActive(buttonGameObject,false);
}
bool IsScreenPointInsideUIElements_Hook(UnityEngine::Object* instance, Vector2 position) {
    // Get EventSystem.current (static property)
    auto eventSystemClass = Class("UnityEngine.EventSystems", "EventSystem");
    auto currentProp = eventSystemClass.GetProperty("current");
    auto currentPropTyped = Property<UnityEngine::Object*>(currentProp);
    UnityEngine::Object* eventSystem = currentPropTyped.Get();
    if (!eventSystem) {
        LOGE("EventSystem.current is null");
        return false;
    }

    // Create PointerEventData with EventSystem
    auto pointerEventDataClass = Class("UnityEngine.EventSystems", "PointerEventData");
    auto eventData = pointerEventDataClass.CreateNewObjectParameters(eventSystem);
    if (!eventData) {
        LOGE("Failed to create PointerEventData");
        return false;
    }

    // Set eventData.position = position
    auto positionProp = pointerEventDataClass.GetProperty("position");
    auto posPropTyped = Property<Vector2>(positionProp);
    posPropTyped[eventData].Set(position);

    // Create List<RaycastResult>
    auto raycastResultClass = Class("UnityEngine.EventSystems", "RaycastResult");
    auto listClass = Class("System.Collections.Generic", "List`1");
    auto genericListClass = listClass.GetGeneric({ raycastResultClass.GetCompileTimeClass() });
    auto results = genericListClass.CreateNewObjectParameters();
    if (!results) {
        LOGE("Failed to create List<RaycastResult>");
        return false;
    }

    // Call EventSystem.RaycastAll(eventData, results)
    Method<void> raycastAll = eventSystemClass.GetMethod("RaycastAll");
    raycastAll[eventSystem].Call(eventData, results);

    // Get results.Count
    auto countProp = genericListClass.GetProperty("Count");
    auto countPropTyped = Property<int>(countProp);
    int count = countPropTyped[results].Get();

    return count > 0;
}

void start() {
    assembly_csharp = Image("Assembly-CSharp");
    unityCore = Image("UnityEngine.CoreModule");
    unityUI = Image("UnityEngine.UI");
    
    /*
    unityCore = GetImage(GetAssembly("UnityEngine.CoreModule"));
    assembly_csharp = GetImage(GetAssembly("Assembly-CSharp"));
    */
    //unityCore = GetImage("UnityEngine.CoreModule");
    //assembly_csharp = GetImage("Assembly-CSharp");
    
    auto startClass = Class("","ADOStartup").GetMethod("Startup");
    BasicHook(startClass, ADOFAIStart,old_ADOStartup_Startup);
    auto OttoButtonController_Update_Hook = Class("","OttoButtonController").GetMethod("Update");
    BasicHook(OttoButtonController_Update_Hook, OttoButtonController_Update,old_OttoButtonController_Update);
    auto RDC_forceUnlockAllLevels = Class("","RDC").GetMethod("get_forceUnlockAllLevels");
    BasicHook(RDC_forceUnlockAllLevels, RDC_forceUnlockAllLevelsMet,(void*)nullptr);
    auto scrPlanet_GetMultipressPenalty = Class("","scrPlanet").GetMethod("GetMultipressPenalty");
    BasicHook(scrPlanet_GetMultipressPenalty, scrPlanet_GetMultipressPenaltyMet,(void*)nullptr);
    auto scrMisc_DetermineDifficultyUIMode = Class("","scrMisc").GetMethod("DetermineDifficultyUIMode");
    BasicHook(scrMisc_DetermineDifficultyUIMode, DetermineDifficultyUIModeMet, (void*)nullptr);
    
    auto ADOBase_isUnityEditor = Class("","ADOBase").GetMethod("get_isUnityEditor");
    BasicHook(ADOBase_isUnityEditor, IsUnityEditorMet,(void*)nullptr);
    auto scrRing_Update_Hook = Class("","scrRing").GetMethod("Update");
    BasicHook(scrRing_Update_Hook, scrRing_Update,old_scrRing_Update);

    auto scrControllerClass_GetShowHitTextMethod = Class("","scrController").GetMethod("ShowHitText");
    BasicHook(scrControllerClass_GetShowHitTextMethod, ShowHitTextMet,old_scrController_ShowHitText);
    auto dlcPath = Class("","GCNS").GetMethod("get_BundlesLoadPath");
    BasicHook(dlcPath, dlc,(void*)nullptr);
    auto GetisMobile = Class("","ADOBase").GetMethod("get_isMobile");
    //BasicHook(GetisMobile, IsMobile,old_isMobile);
    auto QuitToMainMenu = Class("","scrController").GetMethod("QuitToMainMenu");
    BasicHook(QuitToMainMenu, QuitToMainMenuMet,old_QuitToMainMenu);
    auto scrControllerClass_RestartMethod = Class("","scrController").GetMethod("RestartProgress");
    BasicHook(scrControllerClass_RestartMethod, RestartMet,old_scrController_Restart);
    auto ADOFAI_LevelEventInfo_taroDLCCheck = Class("ADOFAI","LevelEventInfo").GetMethod("get_taroDLCCheck");
    BasicHook(ADOFAI_LevelEventInfo_taroDLCCheck, TaroDLCCheckMet,(void*)nullptr);
    auto Dev_ = Class("ADOFAI", "LevelEventInfo").GetMethod("get_isActive");
    BasicHook(Dev_, IsEditorMet, (void*)nullptr);
    auto IsScreenPointInsideUIElements_Method = Class("", "scrController").GetMethod("IsScreenPointInsideUIElements");
    BasicHook(IsScreenPointInsideUIElements_Method, IsScreenPointInsideUIElements_Hook, (void*)nullptr);
    auto scrUIController_Update_Method = Class("","scrUIController").GetMethod("Update");
    BasicHook(scrUIController_Update_Method, scrUIController_Update,old_scrUIController_Update);
    auto Dev = Class("UnityEngine", "Application", Image("UnityEngine.CoreModule")).GetMethod("get_isEditor");
    //BasicHook(Dev, IsEditorMet, (void*)nullptr);

    //auto Dev_d = Il2CppGetMethodOffset(unityCore, "UnityEngine", "Application", "get_isEditor", 0);
    //DobbyHook(Dev_d, (void*)IsEditorMet,(void**)&old_isEditor);
}
