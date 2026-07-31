#include "universe.h"
#include "Hooks.h"
#include "Cache.h"
#include "Helpers.h"
#include "Config.h"
#include "Logger.h"

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

// ============ Hook 函數實現 ============

void (*old_ADOStartup_Startup)(UnityEngine::Object*) = nullptr;
void ADOFAIStart(UnityEngine::Object* instance) {
    old_ADOStartup_Startup(instance);
    g_dlcInitializedField.Set(true);
}

void (*old_OttoButtonController_Update)(UnityEngine::Object*) = nullptr;
void OttoButtonController_Update(UnityEngine::Object* instance) {
    old_OttoButtonController_Update(instance);
    auto controller = g_get_controller.Call();
    if (controller && g_gameworldField[controller].Get()) {
        auto ottoButtonObj = g_ottoButtonField[instance].Get();
        auto gameObject = GetGameObject(ottoButtonObj);
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

void (*old_scrController_ShowHitText)(UnityEngine::Object*, HitMargin, Vector3, float) = nullptr;
void ShowHitTextMet(UnityEngine::Object* instance, HitMargin hitMargin, Vector3 position, float angle) {
    if (hitMargin != HitMargin::Perfect)
        old_scrController_ShowHitText(instance, hitMargin, position, angle);
}

String* dlc() {
    return CreateMonoString(g_modConfig.bundlesLoadPath.c_str());
}

DifficultyUIMode DetermineDifficultyUIModeMet() {
    return DifficultyUIMode::ShowAll;
}

bool (*old_isMobile)() = nullptr;
bool IsMobile() {
    auto scene = g_get_sceneName.Call();
    if (scene && (scene->str() == "scnTaroMenu0" || scene->str() == "scnTaroMenu1" ||
                  scene->str() == "scnTaroMenu2" || scene->str() == "scnTaroMenu3")) {
        return false;
    }
    return old_isMobile();
}

void (*old_QuitToMainMenu)(UnityEngine::Object*) = nullptr;
void QuitToMainMenuMet(UnityEngine::Object* instance) {
    old_QuitToMainMenu(instance);
    if (g_get_isScnGame.Call()) {
        g_sceneToLoadField.Set(CreateMonoString("scnMobileMenu"));
        g_internalLevelNameField.Set(nullptr);
        g_customLevelPathsField.Set(nullptr);
    }
    g_useNoFailField.Set(false);
}

void (*old_scrController_Restart)(UnityEngine::Object*) = nullptr;
void RestartMet(UnityEngine::Object* instance) {
    old_scrController_Restart(instance);
    if (g_get_isScnGame.Call() && !g_get_isOfficialLevel.Call()) {
        g_useNoFailField.Set(!g_useNoFailField.Get());
    } else {
        g_useNoFailField.Set(false);
    }
}

void (*old_scnGame_Play)(UnityEngine::Object*) = nullptr;
void PlayMet(UnityEngine::Object* instance) {
    old_scnGame_Play(instance);
    if (g_get_isOfficialLevel.Call())
        g_useNoFailField.Set(false);
}

bool RDC_forceUnlockAllLevelsMet()       { return true; }
bool TaroDLCCheckMet()                   { return true; }
bool IsUnityEditorMet()                  { return true; }
bool IsEditorMet()                       { return true; }
bool scrPlanet_GetMultipressPenaltyMet() { return false; }

void (*old_scrRing_Update)(UnityEngine::Object*) = nullptr;
void scrRing_Update(UnityEngine::Object* instance) {
    old_scrRing_Update(instance);
    auto transform = g_getTransformMethod[instance].Call();
    g_localScaleProperty[transform].Set(Vector3::zero);
}

void (*old_scrUIController_Update)(UnityEngine::Object*) = nullptr;
void scrUIController_Update(UnityEngine::Object* instance) {
    old_scrUIController_Update(instance);
    auto pauseBtn = g_pauseButtonField[instance].Get();
    SetActive(GetGameObject(pauseBtn), false);
}

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

void (*old_RefreshLayout)(UnityEngine::Object*) = nullptr;
void RefreshLayout_Hook(UnityEngine::Object* instance) {
    old_RefreshLayout(instance);

    if (!g_get_isScnGame.Call()) return;

    auto openInEditorBtn = g_openInEditorButtonField[instance].Get();
    if (!openInEditorBtn) return;

    auto pauseButtonsArray = g_pauseButtonsField[instance].Get();
    if (!pauseButtonsArray) return;

    bool found = false;
    for (int i = 0; i < pauseButtonsArray->capacity; i++) {
        if (pauseButtonsArray->m_Items[i] == static_cast<UnityEngine::Object*>(openInEditorBtn)) {
            found = true;
            break;
        }
    }
    if (!found) return;

    int newSize = pauseButtonsArray->capacity - 1;
    auto newArray = g_generalPauseButtonClass.NewArray<UnityEngine::Object*>(newSize);
    int idx = 0;
    for (int i = 0; i < pauseButtonsArray->capacity; i++) {
        auto item = pauseButtonsArray->m_Items[i];
        if (item != static_cast<UnityEngine::Object*>(openInEditorBtn)) {
            newArray->m_Items[idx++] = item;
        }
    }

    g_pauseButtonsField[instance].Set(newArray);
    LOGD("RefreshLayout_Hook: removed openInEditorButton (size %lu -> %d)", pauseButtonsArray->capacity, newSize);
}

void BetaBuild(UnityEngine::Object* instance) {
    auto textComponent = g_getTMPComponentGeneric[instance].Call();

    g_setBuildTextField[instance].Set(true);

    if (textComponent) {
        g_tmpTextProperty[textComponent].Set(CreateMonoString("Mod Version 1.0.3"));
    }
}
