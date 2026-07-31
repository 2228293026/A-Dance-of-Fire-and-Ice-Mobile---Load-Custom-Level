#ifndef HOOKS_H
#define HOOKS_H

#include "universe.h"
#include "Enum/HitMargin.h"
#include "Enum/DifficultyUIMode.h"

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

// ============ Hook 函数声明 ============

// ADOStartup.Startup
extern void (*old_ADOStartup_Startup)(UnityEngine::Object*);
void ADOFAIStart(UnityEngine::Object* instance);

// OttoButtonController.Update
extern void (*old_OttoButtonController_Update)(UnityEngine::Object*);
void OttoButtonController_Update(UnityEngine::Object* instance);

// scrController.ShowHitText
extern void (*old_scrController_ShowHitText)(UnityEngine::Object*, HitMargin, Vector3, float);
void ShowHitTextMet(UnityEngine::Object* instance, HitMargin hitMargin, Vector3 position, float angle);

// GCNS.get_BundlesLoadPath
String* dlc();

// scrMisc.DetermineDifficultyUIMode
DifficultyUIMode DetermineDifficultyUIModeMet();

// ADOBase.get_isMobile
extern bool (*old_isMobile)();
bool IsMobile();

// scrController.QuitToMainMenu
extern void (*old_QuitToMainMenu)(UnityEngine::Object*);
void QuitToMainMenuMet(UnityEngine::Object* instance);

// scrController.RestartProgress
extern void (*old_scrController_Restart)(UnityEngine::Object*);
void RestartMet(UnityEngine::Object* instance);

// scnGame.Play
extern void (*old_scnGame_Play)(UnityEngine::Object*);
void PlayMet(UnityEngine::Object* instance);

// 常量 hook 函数（无 original）
bool RDC_forceUnlockAllLevelsMet();
bool TaroDLCCheckMet();
bool IsUnityEditorMet();
bool IsEditorMet();
bool scrPlanet_GetMultipressPenaltyMet();

// scrRing.Update
extern void (*old_scrRing_Update)(UnityEngine::Object*);
void scrRing_Update(UnityEngine::Object* instance);

// scrUIController.Update
extern void (*old_scrUIController_Update)(UnityEngine::Object*);
void scrUIController_Update(UnityEngine::Object* instance);

// scrController.IsScreenPointInsideUIElements
bool IsScreenPointInsideUIElements_Hook(UnityEngine::Object* instance, Vector2 position);

// PauseMenu.RefreshLayout
extern void (*old_RefreshLayout)(UnityEngine::Object*);
void RefreshLayout_Hook(UnityEngine::Object* instance);

// scrEnableIfBeta.Awake
void BetaBuild(UnityEngine::Object* instance);

#endif // HOOKS_H
