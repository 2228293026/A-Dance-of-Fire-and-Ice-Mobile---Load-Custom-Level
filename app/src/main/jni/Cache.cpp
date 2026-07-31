#include "Cache.h"

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

// ============ 缓存反射对象 (全局静态定义) ============

// 基础 Unity 方法
Method<void> g_setActiveMethod;
Method<UnityEngine::Object*> g_getGameObjectMethod;
Method<UnityEngine::Object*> g_getTransformMethod;

// scrController/ADOBase 常用字段/方法
Field<bool> g_useNoFailField;
Method<bool> g_get_isScnGame;
Method<bool> g_get_isOfficialLevel;
Method<UnityEngine::Object*> g_get_controller;
Method<UnityEngine::Object*> g_get_customLevel;
Field<UnityEngine::Object*> g_ottoButtonField;
Method<String*> g_get_sceneName;

// scrController 其他
Property<bool> g_autoProperty;
Field<bool> g_gameworldField;
Field<UnityEngine::Object*> g_pauseButtonField;

// UI 相关
Class g_selectableClass;
Property<UnityEngine::Object*> g_imageProperty;
Class g_graphicClass;
Property<Color> g_colorProperty;

// scnGame
Field<float> g_highestBPMField;

// Transform
Property<Vector3> g_localScaleProperty;

// GCS 字段
Field<String*> g_customLevelPathsField;
Field<String*> g_internalLevelNameField;
Field<String*> g_sceneToLoadField;

// EventSystem 相关
Property<UnityEngine::Object*> g_eventSystemCurrentProp;
Class g_pointerEventDataClass;
Class g_raycastResultClass;
Class g_listRaycastResultClass;
Method<void> g_raycastAllMethod;
Property<Vector2> g_pointerEventDataPositionProp;
Property<int> g_listCountProp;

// 其他
Field<bool> g_dlcInitializedField;

// PauseMenu
Class g_generalPauseButtonClass;
Field<Array<UnityEngine::Object*>*> g_pauseButtonsField;
Field<UnityEngine::Object*> g_openInEditorButtonField;

// String 类
Class g_stringClass;

// BetaBuild
Method<UnityEngine::Object*> g_getComponentMethod;
Method<UnityEngine::Object*> g_getTMPComponentGeneric;
Property<String*> g_tmpTextProperty;
Method<Vector2> g_getAnchoredPositionMethod;
Method<void> g_setAnchoredPositionMethod;
Method<void> g_setSizeDeltaMethod;
Field<bool> g_setBuildTextField;
Method<bool> g_debugMethod;
Method<UnityEngine::Object*> g_getRectTransformMethod;

void InitModCache() {
    // 基础 Unity
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
