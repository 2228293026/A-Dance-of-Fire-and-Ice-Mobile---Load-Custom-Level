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
#include <thread>
#include <cstdio>
#include <dlfcn.h>

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
uintptr_t G_IL2CPP;
Image unityCore;
Image assembly_csharp;
Image unityUI;
*/

// ============ 缓存反射对象 (全局静态) ============

// ---- 基础Unity方法 ----
static Method<void> g_setActiveMethod;
static Method<UnityEngine::Object*> g_getGameObjectMethod;
static Method<UnityEngine::Object*> g_getTransformMethod;

// ---- scrController/ADOBase 常用字段方法 ----
static Field<bool> g_useNoFailField;                  // GCS.useNoFail
static Method<bool> g_get_isScnGame;                  // ADOBase.get_isScnGame
static Method<bool> g_get_isOfficialLevel;            // ADOBase.get_isOfficialLevel
static Method<UnityEngine::Object*> g_get_controller;  // ADOBase.get_controller
static Method<UnityEngine::Object*> g_get_customLevel; // ADOBase.get_customLevel
static Field<UnityEngine::Object*> g_ottoButtonField; // OttoButtonController.button
static Method<String*> g_get_sceneName;               // ADOBase.get_sceneName

// ---- scrController 其他 ----
static Property<bool> g_autoProperty;                 // RDC.auto
static Field<bool> g_gameworldField;                  // scrController.gameworld
static Field<UnityEngine::Object*> g_pauseButtonField; // scrUIController.pauseButton

// ---- UI 相关 ----
static Class g_selectableClass;
static Property<UnityEngine::Object*> g_imageProperty;
static Class g_graphicClass;
static Property<Color> g_colorProperty;

// ---- scnGame ----
static Field<float> g_highestBPMField;                // scnGame.highestBPM

// ---- Transform ----
static Property<Vector3> g_localScaleProperty;

// ---- GCS 字段 (QuitToMainMenu) ----
static Field<String*> g_customLevelPathsField;
static Field<String*> g_internalLevelNameField;
static Field<String*> g_sceneToLoadField;

// ---- EventSystem/PointerEventData 相关 ----
static Property<UnityEngine::Object*> g_eventSystemCurrentProp;
static Class g_pointerEventDataClass;
static Class g_raycastResultClass;
static Class g_listRaycastResultClass;
static Method<void> g_raycastAllMethod;
static Property<Vector2> g_pointerEventDataPositionProp;
static Property<int> g_listCountProp;

// ---- 其他 ----
static Field<bool> g_dlcInitializedField;            // DLCManager.initialized

// PauseMenu 相关（移除编辑器按钮）
static Class g_generalPauseButtonClass;               // GeneralPauseButton 类
static Field<Array<UnityEngine::Object*>*> g_pauseButtonsField;  // PauseMenu.pauseButtons 字段
static Field<UnityEngine::Object*> g_openInEditorButtonField;   // PauseMenu.openInEditorButton (PauseButton)

// ---- String 类 (用于文件选择器) ----
static Class g_stringClass;

// ---- BetaBuild 相关缓存 ----
static Method<UnityEngine::Object*> g_getComponentMethod;
static Method<UnityEngine::Object*> g_getTMPComponentGeneric;
static Property<String*> g_tmpTextProperty;
static Method<Vector2> g_getAnchoredPositionMethod;
static Method<void> g_setAnchoredPositionMethod;
static Method<void> g_setSizeDeltaMethod;
static Field<bool> g_setBuildTextField;
static Method<bool> g_debugMethod;
static Method<UnityEngine::Object*> g_getRectTransformMethod;  // GetComponent<RectTransform>()

// ============ 辅助函数 (使用缓存) ============
void SetActive(UnityEngine::Object* gameObject, bool active) {
    if (!gameObject) return;
    g_setActiveMethod[gameObject].Call(active);
}

UnityEngine::Object* GetGameObject(UnityEngine::Object* component) {
    if (!component) return nullptr;
    return g_getGameObjectMethod[component].Call();
}

// ============ 颜色辅助 ============
Color white() { return Color(1,1,1,1); }
Color gray()  { return Color(0.5,0.5,0.5,1); }
Color red()   { return Color(1,0,0,1); }

// ============ Java 文件选择器相关 (不动) ============
static JavaVM* g_vm = nullptr;
static jclass g_javaFilePickerClass = nullptr;
static jmethodID g_initMethodID = nullptr;
static jmethodID g_showMethodID = nullptr;

static std::mutex g_pickerMutex;
static std::condition_variable g_pickerCV;
static bool g_pickerResultReady = false;
static std::string g_pickerSelectedPath;

// 替换原先的 ofstream + mutex
static std::queue<std::string> g_logQueue;
static std::mutex g_queueMutex;
static std::condition_variable g_queueCV;
static std::atomic<bool> g_logThreadRunning{false};
static std::thread g_logThread;
static std::string g_logPath = "/sdcard/adofai_mod.log";

// 后台线程函数
void LogWriterThread() {
    std::ofstream logFile(g_logPath, std::ios::trunc); // 每次启动清空
    if (!logFile.is_open()) return;

    while (g_logThreadRunning.load()) {
        std::unique_lock<std::mutex> lock(g_queueMutex);
        g_queueCV.wait(lock, []{ return !g_logQueue.empty() || !g_logThreadRunning; });

        // 取出所有待写消息
        std::queue<std::string> localQueue;
        std::swap(localQueue, g_logQueue);
        lock.unlock();

        // 写入文件
        while (!localQueue.empty()) {
            logFile << localQueue.front();
            localQueue.pop();
        }
        logFile.flush(); // 一次 flush 全部
    }

    // 线程结束前再检查一次队列
    {
        std::lock_guard<std::mutex> lock(g_queueMutex);
        while (!g_logQueue.empty()) {
            logFile << g_logQueue.front();
            g_logQueue.pop();
        }
    }
    logFile.flush();
    logFile.close();
}

// 启动日志线程
void StartLogging() {
    g_logThreadRunning = true;
    g_logThread = std::thread(LogWriterThread);
}

// 停止日志线程
void StopLogging() {
    g_logThreadRunning = false;
    g_queueCV.notify_all();
    if (g_logThread.joinable()) {
        g_logThread.join();
    }
}

// LogToFile 现在只负责格式化并推入队列
void LogToFile(const char* format, ...) {
    // 获取时间戳
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
                  now.time_since_epoch()) % 1000;

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S");
    oss << '.' << std::setfill('0') << std::setw(3) << ms.count();
    oss << " ";

    char buffer[1024];
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    oss << buffer << '\n';

    // 入队（锁粒度极小）
    {
        std::lock_guard<std::mutex> lock(g_queueMutex);
        g_logQueue.push(oss.str());
    }
    g_queueCV.notify_one();
}

#undef LOGD
#undef LOGE
#undef LOGW
#define LOGD(...) do { __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)
#define LOGE(...) do { __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)
#define LOGW(...) do { __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)

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
    
    // 无限等待，直到 Java 回调通知
    std::unique_lock<std::mutex> lock(g_pickerMutex);
    g_pickerCV.wait(lock, []{ return g_pickerResultReady; });  // 无超时
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

    // 创建数组
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

// ============ 初始化全部缓存 ============
void InitModCache() {
    // 基础Unity
    auto gameObjectClass = Class("UnityEngine", "GameObject");
    g_setActiveMethod = gameObjectClass.GetMethod("SetActive", {"value"});
    auto componentClass = Class("UnityEngine", "Component");
    g_getGameObjectMethod = componentClass.GetMethod("get_gameObject");
    g_getTransformMethod = componentClass.GetMethod("get_transform");

    // ADOBase
    Class ADOBaseClass = Class("", "ADOBase");
    g_get_controller = ADOBaseClass.GetMethod("get_controller");
    g_get_customLevel = ADOBaseClass.GetMethod("get_customLevel");
    g_get_isScnGame = ADOBaseClass.GetMethod("get_isScnGame");
    g_get_isOfficialLevel = ADOBaseClass.GetMethod("get_isOfficialLevel");
    g_get_sceneName = ADOBaseClass.GetMethod("get_sceneName");

    // scrController
    g_gameworldField = Class("", "scrController").GetField("gameworld");

    // RDC.auto
    g_autoProperty = Class("", "RDC").GetProperty("auto");

    // OttoButtonController.button
    g_ottoButtonField = Class("", "OttoButtonController").GetField("button");

    // scnGame.highestBPM
    g_highestBPMField = Class("", "scnGame").GetField("highestBPM");

    // 暂停按钮
    g_pauseButtonField = Class("", "scrUIController").GetField("pauseButton");

    // UI 组件
    g_selectableClass = Class("UnityEngine.UI", "Selectable");
    g_imageProperty = g_selectableClass.GetProperty("image");
    g_graphicClass = Class("UnityEngine.UI", "Graphic");
    g_colorProperty = g_graphicClass.GetProperty("color");

    // Transform.localScale
    g_localScaleProperty = Class("UnityEngine", "Transform").GetProperty("localScale");

    // GCS 字段
    auto GCSClass = Class("", "GCS");
    g_useNoFailField = GCSClass.GetField("useNoFail");
    g_customLevelPathsField = GCSClass.GetField("customLevelPaths");
    g_internalLevelNameField = GCSClass.GetField("internalLevelName");
    g_sceneToLoadField = GCSClass.GetField("sceneToLoad");

    // DLCManager.initialized
    g_dlcInitializedField = Class("", "DLCManager").GetField("initialized");

    // EventSystem 相关 (IsScreenPointInsideUIElements)
    auto eventSystemClass = Class("UnityEngine.EventSystems", "EventSystem");
    g_eventSystemCurrentProp = eventSystemClass.GetProperty("current");
    g_pointerEventDataClass = Class("UnityEngine.EventSystems", "PointerEventData");
    g_raycastResultClass = Class("UnityEngine.EventSystems", "RaycastResult");
    auto listClass = Class("System.Collections.Generic", "List`1");
    g_listRaycastResultClass = listClass.GetGeneric({ g_raycastResultClass.GetCompileTimeClass() });
    g_raycastAllMethod = eventSystemClass.GetMethod("RaycastAll");
    g_pointerEventDataPositionProp = g_pointerEventDataClass.GetProperty("position");
    g_listCountProp = g_listRaycastResultClass.GetProperty("Count");

    g_openInEditorButtonField = Class("", "PauseMenu").GetField("openInEditorButton");

    // PauseMenu 相关缓存
    g_generalPauseButtonClass = Class("", "GeneralPauseButton");
    g_pauseButtonsField = Class("", "PauseMenu").GetField("pauseButtons");

    // String 类 (文件选择器)
    g_stringClass = Defaults::Get<String*>();

    // BetaBuild 相关缓存
    g_debugMethod = Class("", "RDC").GetMethod("get_debug");

    g_setBuildTextField = Class("", "scrEnableIfBeta").GetField("setBuildText");

    g_getComponentMethod = Class("UnityEngine", "Component").GetMethod("GetComponent", 0);
    g_getTMPComponentGeneric = g_getComponentMethod.GetGeneric({ Class("TMPro", "TMP_Text") });

    g_tmpTextProperty = Class("TMPro", "TMP_Text").GetProperty("text");

    auto rectTransformClass = Class("UnityEngine", "RectTransform");
    g_getAnchoredPositionMethod = rectTransformClass.GetMethod("get_anchoredPosition");
    g_setAnchoredPositionMethod = rectTransformClass.GetMethod("set_anchoredPosition");
    g_setSizeDeltaMethod = rectTransformClass.GetMethod("set_sizeDelta");
    g_getRectTransformMethod = g_getComponentMethod.GetGeneric({ Class("UnityEngine", "RectTransform") });
}

// ============ Hook 函数实现 (全部使用缓存) ============
// ADOStartup.Startup -> 强制 DLC initialized
void (*old_ADOStartup_Startup)(UnityEngine::Object *);
void ADOFAIStart(UnityEngine::Object *instance) {
    old_ADOStartup_Startup(instance);
    g_dlcInitializedField.Set(true);
}
// OttoButtonController.Update
void (*old_OttoButtonController_Update)(UnityEngine::Object* );
void OttoButtonController_Update(UnityEngine::Object* instance) {
    old_OttoButtonController_Update(instance);

    auto controller = g_get_controller.Call();
    if (controller && g_gameworldField[controller].Get()) {
        UnityEngine::Object* ottoButtonObj = g_ottoButtonField[instance].Get();
        UnityEngine::Object* gameObject = GetGameObject(ottoButtonObj);
        SetActive(gameObject, true);

        bool isAuto = g_autoProperty.Get();
        float highBPM = g_highestBPMField[g_get_customLevel.Call()].Get();

        auto imageObj = g_imageProperty[ottoButtonObj].Get();
        if (isAuto) {
            g_colorProperty[imageObj].Set(highBPM >= 300 ? red() : white());
        } else {
            Color grayColor = gray();
            Color redColor = red();
            Color mixed = Color(grayColor.r * redColor.r,
                                grayColor.g * redColor.g,
                                grayColor.b * redColor.b,
                                grayColor.a * redColor.a);
            g_colorProperty[imageObj].Set(highBPM >= 300 ? mixed : grayColor);
        }
    }
}
// scrController.ShowHitText
void (*old_scrController_ShowHitText)(UnityEngine::Object *,HitMargin,Vector3,float);
void ShowHitTextMet(UnityEngine::Object *instance, HitMargin hitMargin, Vector3 position, float angle) {
    if (hitMargin != HitMargin::Perfect)
        old_scrController_ShowHitText(instance, hitMargin, position, angle);
}

// GCNS.get_BundlesLoadPath -> /sdcard/DLC/Bundles
String* dlc() {
    return CreateMonoString("/sdcard/DLC/Bundles");
}

DifficultyUIMode DetermineDifficultyUIModeMet() {
    return DifficultyUIMode::ShowAll;
}

// ADOBase.get_isMobile
bool (*old_isMobile)();
bool IsMobile() {
    auto scene = g_get_sceneName.Call();
    if (scene && (scene->str() == "scnTaroMenu0" || scene->str() == "scnTaroMenu1" ||
                  scene->str() == "scnTaroMenu2" || scene->str() == "scnTaroMenu3")) {
        return false;
    }
    return old_isMobile();
}

// QuitToMainMenu
void (*old_QuitToMainMenu)(UnityEngine::Object *);
void QuitToMainMenuMet(UnityEngine::Object *instance) {
    old_QuitToMainMenu(instance);
    if (g_get_isScnGame.Call()) {
        g_sceneToLoadField.Set(CreateMonoString("scnMobileMenu"));
        g_internalLevelNameField.Set(nullptr);
        g_customLevelPathsField.Set(nullptr);
    }
    g_useNoFailField.Set(false);
}

// scrController.RestartProgress
void (*old_scrController_Restart)(UnityEngine::Object *);
void RestartMet(UnityEngine::Object *instance) {
    old_scrController_Restart(instance);
    if (g_get_isScnGame.Call() && !g_get_isOfficialLevel.Call()) {
        g_useNoFailField.Set(!g_useNoFailField.Get());
    } else {
        g_useNoFailField.Set(false);
    }
}

// scnGame.Play
void (*old_scnGame_Play)(UnityEngine::Object *);
void PlayMet(UnityEngine::Object *instance) {
    old_scnGame_Play(instance);
    if (g_get_isOfficialLevel.Call())
        g_useNoFailField.Set(false);
}

// 永久返回 true 的简单函数
bool RDC_forceUnlockAllLevelsMet()       { return true; }
bool TaroDLCCheckMet()                   { return true; }
bool IsUnityEditorMet()                  { return true; }
bool IsEditorMet()                       { return true; }
bool scrPlanet_GetMultipressPenaltyMet() { return false; }

// scrRing.Update -> 隐藏圆圈
void (*old_scrRing_Update)(UnityEngine::Object* );
void scrRing_Update(UnityEngine::Object* instance) {
    old_scrRing_Update(instance);
    auto transform = g_getTransformMethod[instance].Call();
    g_localScaleProperty[transform].Set(Vector3::zero);
}

// scrUIController.Update -> 隐藏暂停按钮
void (*old_scrUIController_Update)(UnityEngine::Object* );
void scrUIController_Update(UnityEngine::Object* instance) {
    old_scrUIController_Update(instance);
    auto pauseBtn = g_pauseButtonField[instance].Get();
    SetActive(GetGameObject(pauseBtn), false);
}

// scrController.IsScreenPointInsideUIElements -> 使用缓存的 EventSystem
bool IsScreenPointInsideUIElements_Hook(UnityEngine::Object* instance, Vector2 position) {
    auto eventSystem = g_eventSystemCurrentProp.Get();
    if (!eventSystem) return false;

    auto eventData = g_pointerEventDataClass.CreateNewObjectParameters(eventSystem);
    if (!eventData) return false;
    g_pointerEventDataPositionProp[eventData].Set(position);

    auto results = g_listRaycastResultClass.CreateNewObjectParameters();
    if (!results) return false;

    g_raycastAllMethod[eventSystem].Call(eventData, results);
    return g_listCountProp[results].Get() > 0;
}

// PauseMenu.RefreshLayout -> 移除编辑器按钮
void (*old_RefreshLayout)(UnityEngine::Object*);
void RefreshLayout_Hook(UnityEngine::Object* instance) {
    old_RefreshLayout(instance);

    if (!g_get_isScnGame.Call()) return;

    // 获取 openInEditorButton 对象
    auto openInEditorBtn = g_openInEditorButtonField[instance].Get();
    if (!openInEditorBtn) return;

    // 获取 pauseButtons 数组
    auto pauseButtonsArray = g_pauseButtonsField[instance].Get();
    if (!pauseButtonsArray) return;

    // 检查 openInEditorBtn 是否在数组中
    bool found = false;
    for (int i = 0; i < pauseButtonsArray->capacity; i++) {
        if (pauseButtonsArray->m_Items[i] == static_cast<UnityEngine::Object*>(openInEditorBtn)) {
            found = true;
            break;
        }
    }
    if (!found) return;

    // 创建新数组，过滤掉 openInEditorBtn
    int newSize = pauseButtonsArray->capacity - 1;
    auto newArray = g_generalPauseButtonClass.NewArray<UnityEngine::Object*>(newSize);
    int idx = 0;
    for (int i = 0; i < pauseButtonsArray->capacity; i++) {
        auto item = pauseButtonsArray->m_Items[i];
        if (item != static_cast<UnityEngine::Object*>(openInEditorBtn)) {
            newArray->m_Items[idx++] = item;
        }
    }

    // 写回新数组
    g_pauseButtonsField[instance].Set(newArray);
    LOGD("RefreshLayout_Hook: removed openInEditorButton (size %lu -> %d)", pauseButtonsArray->capacity, newSize);
}

void BetaBuild(UnityEngine::Object *instance) {

    // 利用缓存的 GetComponent<TMP_Text>()
    auto textComponent = g_getTMPComponentGeneric[instance].Call();
/*
    if (g_debugMethod.Call()) {
        if (textComponent) {
            UnityEngine::Object* go = GetGameObject(textComponent);
            SetActive(go, false);
        }
        return;
    }
*/

    g_setBuildTextField[instance].Set(true);

    if (textComponent) {
        g_tmpTextProperty[textComponent].Set(CreateMonoString("Mod Version 1.0.2"));
/*
        // 使用缓存的 GetComponent<RectTransform>()
        auto rectTransform = g_getRectTransformMethod[textComponent].Call();

        if (rectTransform) {
            Vector2 newPos(0.0f, -900.0f);
            g_setAnchoredPositionMethod[rectTransform].Call(newPos);

            Vector2 newSize(300.0f, 50.0f);
            g_setSizeDeltaMethod[rectTransform].Call(newSize);
        }
*/
    }
}

// ============ start() 函数 ============
void start() {
    /*
    assembly_csharp = Image("Assembly-CSharp");
    unityCore = Image("UnityEngine.CoreModule");
    unityUI = Image("UnityEngine.UI");
    */

    // 初始化所有缓存
    InitModCache();

    // ---- 安装所有 Hook ----
    auto startMethod = Class("","ADOStartup").GetMethod("Startup");
    BasicHook(startMethod, ADOFAIStart, old_ADOStartup_Startup);

    auto OttoUpdate = Class("","OttoButtonController").GetMethod("Update");
    BasicHook(OttoUpdate, OttoButtonController_Update, old_OttoButtonController_Update);

    auto rdcUnlock = Class("","RDC").GetMethod("get_forceUnlockAllLevels");
    BasicHook(rdcUnlock, RDC_forceUnlockAllLevelsMet, (void*)nullptr);

    auto multiPenalty = Class("","scrPlanet").GetMethod("GetMultipressPenalty");
    BasicHook(multiPenalty, scrPlanet_GetMultipressPenaltyMet, (void*)nullptr);

    auto diffMode = Class("","scrMisc").GetMethod("DetermineDifficultyUIMode");
    BasicHook(diffMode, DetermineDifficultyUIModeMet, (void*)nullptr);

    auto isEditor = Class("","ADOBase").GetMethod("get_isUnityEditor");
    BasicHook(isEditor, IsUnityEditorMet, (void*)nullptr);

    auto ringUpdate = Class("","scrRing").GetMethod("Update");
    BasicHook(ringUpdate, scrRing_Update, old_scrRing_Update);

    auto showHitText = Class("","scrController").GetMethod("ShowHitText");
    BasicHook(showHitText, ShowHitTextMet, old_scrController_ShowHitText);

    auto bundlesPath = Class("","GCNS").GetMethod("get_BundlesLoadPath");
    BasicHook(bundlesPath, dlc, (void*)nullptr);

    auto quit = Class("","scrController").GetMethod("QuitToMainMenu");
    BasicHook(quit, QuitToMainMenuMet, old_QuitToMainMenu);

    auto restart = Class("","scrController").GetMethod("RestartProgress");
    BasicHook(restart, RestartMet, old_scrController_Restart);

    auto taroCheck = Class("ADOFAI","LevelEventInfo").GetMethod("get_taroDLCCheck");
    BasicHook(taroCheck, TaroDLCCheckMet, (void*)nullptr);

    auto activeCheck = Class("ADOFAI", "LevelEventInfo").GetMethod("get_isActive");
    BasicHook(activeCheck, IsEditorMet, (void*)nullptr);

    auto isInsideUI = Class("", "scrController").GetMethod("IsScreenPointInsideUIElements");
    BasicHook(isInsideUI, IsScreenPointInsideUIElements_Hook, (void*)nullptr);

    auto uiUpdate = Class("","scrUIController").GetMethod("Update");
    BasicHook(uiUpdate, scrUIController_Update, old_scrUIController_Update);

    auto mobile = Class("","ADObase").GetMethod("get_isMobile");
    //BasicHook(mobile, IsMobile, old_isMobile);
    //未知原因hook他就崩游戏，先注释了

    auto pauselevelEditor = Class("","PauseMenu").GetMethod("RefreshLayout");
    BasicHook(pauselevelEditor, RefreshLayout_Hook, old_RefreshLayout);

    auto betaBuild_Hook = Class("", "scrEnableIfBeta").GetMethod("Awake");
    BasicHook(betaBuild_Hook, BetaBuild, (void*)nullptr);

    // Install file picker hook (delayed via BNM loaded event)
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
    if (attached) g_vm->DetachCurrentThread();

    LOGD("All hooks installed and caches initialized.");
}

// ============ JNI_OnLoad ============
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, [[maybe_unused]] void *reserved) {
    JNIEnv *env;
    if (vm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        LOGE("Failed to get JNIEnv");
        return JNI_ERR;
    }

    g_vm = vm;
    StartLogging();   // 启动后台写入线程，并清空旧日志
    LOGD("Log system started (async)");

    BNM::Loading::TryLoadByJNI(env);
    BNM::Loading::AddOnLoadedEvent([]() {
        start();
    });
    return JNI_VERSION_1_6;
}

// 新增 JNI_OnUnload，安全停止日志线程
JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved) {
    StopLogging();
}