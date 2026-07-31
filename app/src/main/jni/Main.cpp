#include <jni.h>
#include "universe.h"
#include "Logger.h"
#include "Config.h"
#include "Cache.h"
#include "Helpers.h"
#include "FilePicker.h"
#include "Hooks.h"

using namespace BNM;
using namespace BNM::Operators;
using namespace IL2CPP;
using namespace BNM::Defaults;

JavaVM* g_vm = nullptr;

// ============ start() 函数 ============
void start() {
    // 加载配置文件
    loadConfigFromFile();

    // 初始化所有缓存
    InitModCache();

    // ---- 安装 Hook（根据配置条件安装） ----

    // 始终安装的核心 Hook
    auto startMethod = Class("","ADOStartup").GetMethod("Startup");
    BasicHook(startMethod, ADOFAIStart, old_ADOStartup_Startup);

    auto quit = Class("","scrController").GetMethod("QuitToMainMenu");
    BasicHook(quit, QuitToMainMenuMet, old_QuitToMainMenu);

    auto restart = Class("","scrController").GetMethod("RestartProgress");
    BasicHook(restart, RestartMet, old_scrController_Restart);

    auto activeCheck = Class("ADOFAI", "LevelEventInfo").GetMethod("get_isActive");
    BasicHook(activeCheck, IsEditorMet, (void*)nullptr);

    auto playMethod = Class("","scnGame").GetMethod("Play");
    BasicHook(playMethod, PlayMet, old_scnGame_Play);

    auto pauselevelEditor = Class("","PauseMenu").GetMethod("RefreshLayout");
    BasicHook(pauselevelEditor, RefreshLayout_Hook, old_RefreshLayout);

    auto betaBuild_Hook = Class("", "scrEnableIfBeta").GetMethod("Awake");
    BasicHook(betaBuild_Hook, BetaBuild, (void*)nullptr);

    // 可配置 Hook
    if (g_modConfig.enableUnlockAllLevels) {
        auto rdcUnlock = Class("","RDC").GetMethod("get_forceUnlockAllLevels");
        BasicHook(rdcUnlock, RDC_forceUnlockAllLevelsMet, (void*)nullptr);
        LOGD("Hook: enableUnlockAllLevels enabled");
    }

    if (g_modConfig.enableNoMultipressPenalty) {
        auto multiPenalty = Class("","scrPlanet").GetMethod("GetMultipressPenalty");
        BasicHook(multiPenalty, scrPlanet_GetMultipressPenaltyMet, (void*)nullptr);
        LOGD("Hook: enableNoMultipressPenalty enabled");
    }

    if (g_modConfig.enableDifficultyUIMode) {
        auto diffMode = Class("","scrMisc").GetMethod("DetermineDifficultyUIMode");
        BasicHook(diffMode, DetermineDifficultyUIModeMet, (void*)nullptr);
        LOGD("Hook: enableDifficultyUIMode enabled");
    }

    if (g_modConfig.enableLoadLevel) {
        auto isEditor = Class("","ADOBase").GetMethod("get_isUnityEditor");
        BasicHook(isEditor, IsUnityEditorMet, (void*)nullptr);
        LOGD("Hook: enableLoadLevel enabled");
    }

    if (g_modConfig.enableTaroDlcCheck) {
        auto taroCheck = Class("ADOFAI","LevelEventInfo").GetMethod("get_taroDLCCheck");
        BasicHook(taroCheck, TaroDLCCheckMet, (void*)nullptr);
        LOGD("Hook: enableTaroDlcCheck enabled");
    }

    if (g_modConfig.enableAutoPlay) {
        auto OttoUpdate = Class("","OttoButtonController").GetMethod("Update");
        BasicHook(OttoUpdate, OttoButtonController_Update, old_OttoButtonController_Update);
        LOGD("Hook: enableAutoPlay enabled");
    }

    if (g_modConfig.enableHidePauseButton) {
        auto uiUpdate = Class("","scrUIController").GetMethod("Update");
        BasicHook(uiUpdate, scrUIController_Update, old_scrUIController_Update);
        LOGD("Hook: enableHidePauseButton enabled");
    }

    if (g_modConfig.enableHideCircles) {
        auto ringUpdate = Class("","scrRing").GetMethod("Update");
        BasicHook(ringUpdate, scrRing_Update, old_scrRing_Update);
        LOGD("Hook: enableHideCircles enabled");
    }

    if (g_modConfig.enableHidePerfectHitText) {
        auto showHitText = Class("","scrController").GetMethod("ShowHitText");
        BasicHook(showHitText, ShowHitTextMet, old_scrController_ShowHitText);
        LOGD("Hook: enableHidePerfectHitText enabled");
    }

    if (g_modConfig.enableCustomBundlesPath) {
        auto bundlesPath = Class("","GCNS").GetMethod("get_BundlesLoadPath");
        BasicHook(bundlesPath, dlc, (void*)nullptr);
        LOGD("Hook: enableCustomBundlesPath enabled");
    }

    if (g_modConfig.enableCustomUIHitTest) {
        auto isInsideUI = Class("", "scrController").GetMethod("IsScreenPointInsideUIElements");
        BasicHook(isInsideUI, IsScreenPointInsideUIElements_Hook, (void*)nullptr);
        LOGD("Hook: enableCustomUIHitTest enabled");
    }

    // 文件选择器
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

    LOGD("All hooks installed.");
}

// ============ JNI_OnLoad ============
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, [[maybe_unused]] void *reserved) {
    JNIEnv *env;
    if (vm->GetEnv((void **)&env, JNI_VERSION_1_6) != JNI_OK) {
        LOGE("Failed to get JNIEnv");
        return JNI_ERR;
    }

    g_vm = vm;
    StartLogging();
    LOGD("Log system started (async)");

    Loading::TryLoadByJNI(env);
    Loading::AddOnLoadedEvent([]() {
        start();
    });
    return JNI_VERSION_1_6;
}

// 新增 JNI_OnUnload，安全停止日志线程
JNIEXPORT void JNICALL JNI_OnUnload(JavaVM *vm, void *reserved) {
    StopLogging();
}
