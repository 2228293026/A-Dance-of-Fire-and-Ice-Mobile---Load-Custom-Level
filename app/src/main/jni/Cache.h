#ifndef CACHE_H
#define CACHE_H

#include "universe.h"

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

// ============ 缓存反射对象 (全局静态) ============

// 基础 Unity 方法
extern Method<void> g_setActiveMethod;
extern Method<UnityEngine::Object*> g_getGameObjectMethod;
extern Method<UnityEngine::Object*> g_getTransformMethod;

// scrController/ADOBase 常用字段/方法
extern Field<bool> g_useNoFailField;
extern Method<bool> g_get_isScnGame;
extern Method<bool> g_get_isOfficialLevel;
extern Method<UnityEngine::Object*> g_get_controller;
extern Method<UnityEngine::Object*> g_get_customLevel;
extern Field<UnityEngine::Object*> g_ottoButtonField;
extern Method<String*> g_get_sceneName;

// scrController 其他
extern Property<bool> g_autoProperty;
extern Field<bool> g_gameworldField;
extern Field<UnityEngine::Object*> g_pauseButtonField;

// UI 相关
extern Class g_selectableClass;
extern Property<UnityEngine::Object*> g_imageProperty;
extern Class g_graphicClass;
extern Property<Color> g_colorProperty;

// scnGame
extern Field<float> g_highestBPMField;

// Transform
extern Property<Vector3> g_localScaleProperty;

// GCS 字段 (QuitToMainMenu)
extern Field<String*> g_customLevelPathsField;
extern Field<String*> g_internalLevelNameField;
extern Field<String*> g_sceneToLoadField;

// EventSystem/PointerEventData 相关
extern Property<UnityEngine::Object*> g_eventSystemCurrentProp;
extern Class g_pointerEventDataClass;
extern Class g_raycastResultClass;
extern Class g_listRaycastResultClass;
extern Method<void> g_raycastAllMethod;
extern Property<Vector2> g_pointerEventDataPositionProp;
extern Property<int> g_listCountProp;

// 其他
extern Field<bool> g_dlcInitializedField;

// PauseMenu 相关（移除编辑器按钮）
extern Class g_generalPauseButtonClass;
extern Field<Array<UnityEngine::Object*>*> g_pauseButtonsField;
extern Field<UnityEngine::Object*> g_openInEditorButtonField;

// String 类 (用于文件选择器)
extern Class g_stringClass;

// BetaBuild 相关缓存
extern Method<UnityEngine::Object*> g_getComponentMethod;
extern Method<UnityEngine::Object*> g_getTMPComponentGeneric;
extern Property<String*> g_tmpTextProperty;
extern Method<Vector2> g_getAnchoredPositionMethod;
extern Method<void> g_setAnchoredPositionMethod;
extern Method<void> g_setSizeDeltaMethod;
extern Field<bool> g_setBuildTextField;
extern Method<bool> g_debugMethod;
extern Method<UnityEngine::Object*> g_getRectTransformMethod;

void InitModCache();

#endif // CACHE_H
