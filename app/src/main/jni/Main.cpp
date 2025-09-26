#include <jni.h>
#include "universe.h"
#include <sys/mman.h>
#include <unistd.h>
#include "Enum/HitboxType.h"
#include "Enum/HitMargin.h"
#include "Enum/LevelEventType.h"
#include <limits>

using namespace std;
using namespace BNM;
using namespace BNM::Operators;
using namespace IL2CPP;
using namespace BNM::UnityEngine;
using namespace BNM::ADOFAI;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;
using namespace BNM::IL2CPP;
using namespace BNM::Defaults;

#define LOG_TAG "IL2CPP_EXPORTS"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

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

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, [[maybe_unused]] void *reserved) {
    JNIEnv *env;
    vm->GetEnv((void **) &env, JNI_VERSION_1_6);
    BNM::Loading::TryLoadByJNI(env);
    BNM::Loading::AddOnLoadedEvent(start);
    
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
    Method<UnityEngine::Object*> getGameObjectMethod = componentClass.GetMethod("get_gameObject");
    UnityEngine::Object* result = getGameObjectMethod[component].Call();
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

void(*old_BetaBuild)(UnityEngine::Object *);
void BetaBuild(UnityEngine::Object *instance) {
    old_BetaBuild(instance);
    Class componentClass = Class("UnityEngine", "Component");
    Method<UnityEngine::Object*> get_gameObject = componentClass.GetMethod("get_gameObject");
    UnityEngine::Object* gameObject = get_gameObject[instance].Call();
    SetActive(gameObject,false);
    Method <bool> Debug = Class("","RDC").GetMethod("get_debug");
    Class rectTransformClass = Class("UnityEngine", "RectTransform");
    Method<Vector2> get_anchoredPosition = rectTransformClass.GetMethod("get_anchoredPosition");
    Method<void> set_anchoredPosition = rectTransformClass.GetMethod("set_anchoredPosition");
    Method<void> set_sizeDelta = rectTransformClass.GetMethod("set_sizeDelta");
    if (!Debug.Call()) {
        Field<bool> setBuildText = Class("","scrEnableIfBeta").GetField("setBuildText");
     setBuildText[instance].Set(true);
     if (setBuildText) {
    SetActive(gameObject,true);
    Method<UnityEngine::Object*> getComponent = Class("UnityEngine", "Component")
    .GetMethod("GetComponent",0);
    Method<UnityEngine::Object*> GetComponentObject = getComponent
    .GetGeneric({Class("TMPro", "TMP_Text")});
    UnityEngine::Object* textComponent = GetComponentObject[instance].Call();
    Property<String*> textProp = Class("TMPro", "TMP_Text").GetProperty("text");
    textProp[textComponent].Set(CreateMonoString("HitMargin Mod"));
    Method<UnityEngine::Object*> GetRectTransformComponentObject = getComponent
            .GetGeneric({rectTransformClass});
            UnityEngine::Object* rectTransform = GetRectTransformComponentObject[textComponent].Call();
            if(rectTransform) {
                Vector2 newPosition(0.0f, -900.0f);
                set_anchoredPosition[rectTransform].Call(newPosition);
                Vector2 newSize(300.0f, 50.0f);
            }
        }
    }
}
void (*old_ShowNews)(UnityEngine::Object* , UnityEngine::Object* );
void ShowNews(UnityEngine::Object* instance, UnityEngine::Object* news) {
    old_ShowNews(instance, news);
    Property<String*> textProp = Class("TMPro", "TMP_Text").GetProperty("text");
    Field<UnityEngine::Object*> buttonField = Class("", "NewsSign").GetField("button");
    Field<String*> linkField = Class("", "scrButtonURL").GetField("link");
    Field<UnityEngine::Object*> textField = Class("", "NewsSign").GetField("text");
    UnityEngine::Object* textComponent = textField[instance].Get();
    UnityEngine::Object* buttonComponent = buttonField[instance].Get();

    textProp[textComponent].Set(CreateMonoString("Mod by HitMargin"));
    linkField[buttonComponent].Set(CreateMonoString("https://space.bilibili.com/1757946676"));
}
int textSize;
bool textShow;
void (*old_ShowIfDebug_Update)(UnityEngine::Object*);
void ShowIfDebug_Update(UnityEngine::Object* instance) {
    old_ShowIfDebug_Update(instance);
    auto componentClass = Class("UnityEngine", "Component");
    auto rectTransformClass = Class("UnityEngine", "RectTransform");
    Method<UnityEngine::Object*> getComponent = componentClass.GetMethod("GetComponent", 0);
    Method<UnityEngine::Object*> getRectTransform = getComponent.GetGeneric({rectTransformClass});
    UnityEngine::Object* rectTransform = getRectTransform[instance].Call();
    if (rectTransform && textShow) {
        float size = textSize;
        Property<Vector2> anchoredPosition = rectTransformClass.GetProperty("anchoredPosition");
        Vector2 currentPos = anchoredPosition[rectTransform].Get();
        Vector2 newPos(100.0f + (size * 5), currentPos.y);
        anchoredPosition[rectTransform].Set(newPos);
    }
}
void (*old_UIController_Update)(UnityEngine::Object*);
void UIController_Update(UnityEngine::Object* instance) {
    old_UIController_Update(instance);
    Field<UnityEngine::Object*>pauseButton = Class("","scrUIController").GetField("pauseButton");
    //UnityEngine::Object* b = pauseButton[instance].Get();
    //UnityEngine::Object* buttonGameObject = GetGameObject(b);
    //SetActive(buttonGameObject,false);
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
    old_OttoButtonController_Update(instance); // 先调用远函数, 类似于HarmonyLib的后置补丁
    Class ADOBaseClass = Class("", "ADOBase"); // 获取游戏类
    Field<UnityEngine::Object*> ottoButtonField = Class("", "OttoButtonController")
    .GetField("button"); // 获取关键字段
    Property<bool> autoPro = Class("", "RDC").GetProperty("auto"); // 获取游戏内的属性{get;set;}
    Method<UnityEngine::Object*> get_controller = ADOBaseClass.GetMethod("get_controller"); // 获取实例
    Field<bool> gameworld = Class("", "scrController").GetField("gameworld"); // 获取字段
    if (get_controller.Call() != nullptr && gameworld[get_controller.Call()].Get()) // 检测实例是否为空 && 检测是否为游玩模式（需要使用实例传递）
    {
        UnityEngine::Object* ottoButtonObj = ottoButtonField[instance].Get(); // 反向获取UnityEngine.UI.Button实例（OttoButtonController.button）
        Class componentClass = Class("UnityEngine", "Component"); //获取组件类
        Method<UnityEngine::Object*> getGameObject = componentClass
        .GetMethod("get_gameObject"); //获取游戏对象函数
        UnityEngine::Object* gameObject = getGameObject[ottoButtonObj].Call(); // 存储游戏对象实例（OttoButtonController.button）
        SetActive(gameObject, true); //设置游戏活动
        UnityEngine::Object* customLevel = callMethod<UnityEngine::Object *>("","ADOBase","get_lm"); //存储实例
        Field <float> highBPM = Class("","scrLevelMaker").GetField("highestBPM"); // 获取字段
        Class GraphicClass = Class("UnityEngine.UI", "Graphic"); // 获取类
        Class SelectableClass = Class("UnityEngine.UI", "Selectable"); //获取类
        Property<UnityEngine::Object*> image = SelectableClass.GetProperty("image"); // 获取属性
        UnityEngine::Object* imageObj = image[ottoButtonObj].Get(); // 传递实例到image（因为是继承关系可以传递实例） 获取image的实例
        Property<Color> color = GraphicClass.GetProperty("color"); // 获取属性
        if (autoPro.Get()) { // 条件检测
                color[imageObj].Set(highBPM[customLevel].Get() >= 300 ? red() : white()); // 设置颜色条件判断
            } else {
                Color grayColor = gray();
                Color redColor = red();
                Color mixedColor = Color(
                        grayColor.r * redColor.r,
                        grayColor.g * redColor.g,
                        grayColor.b * redColor.b,
                        grayColor.a * redColor.a
                ); // 混合颜色
                color[imageObj].Set(highBPM[customLevel].Get() >= 300 ? mixedColor : gray()); // 设置颜色条件判断
        }
    }
}

// 继承示意图
//UnityEngine.Object
//    → Component (UnityEngine.Component)
//        → Behaviour
//            → UIBehaviour
//                ├→ Selectable (UnityEngine.UI.Selectable)
//                │   └→ Button (UnityEngine.UI.Button)
//                │
//                └→ Graphic (UnityEngine.UI.Graphic)
//                    ├→ Image (UnityEngine.UI.Image)
//                    ├→ Text (UnityEngine.UI.Text)
//                    └→ RawImage (UnityEngine.UI.RawImage)

float (*old_Validate_float)(UnityEngine::Object *,float);
float Validate_floatMet(UnityEngine::Object *instance,float value) {
    return value;
        
}
int (*old_Validate_int)(UnityEngine::Object *,int);
int Validate_intMet(UnityEngine::Object *instance,int value) {
    return value;
}
void (*old_getOnGui)();
void getOnGui() {
    UnityEngine::Object* Game_ = getFieldValue<UnityEngine::Object *>("","ExtraUtils","instance");
    old_getOnGui();
    Method<int> sizeText = Class("","ExtraUtils").GetMethod("get_textSize");
    Method<bool> showText = Class("","ExtraUtils").GetMethod("get_enableInfoShower");
    textSize = sizeText[Game_].Call();
    textShow = showText[Game_].Call();
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
UnityEngine::Object* g_scnEditorInstance;
void (*old_scnEditor_Play)(UnityEngine::Object *);
void scnEditor_Play(UnityEngine::Object *instance) {
        old_scnEditor_Play(instance);
        g_scnEditorInstance = instance;
        // NoFail
        Field<UnityEngine::Object*> buttonNoFail = Class("","scnEditor").GetField("buttonNoFail");
        Method<void> set_interactable = Class("UnityEngine.UI", "Selectable").GetMethod("set_interactable");
        UnityEngine::Object* a = buttonNoFail[instance].Get();
        set_interactable[a].Call(true);
        // EditorDifficultySelector
        Field<UnityEngine::Object*> editorDifficultySelector = Class("","scnEditor").GetField("editorDifficultySelector");
        Method<void> SetChangeable = Class("", "EditorDifficultySelector").GetMethod("SetChangeable");
        UnityEngine::Object* b = editorDifficultySelector[instance].Get();
        SetChangeable[b].Call(true);
}
bool (*old_isEditor)();
bool IsEditorMet() {
    return true;
}
String* (*old_GetDeviceID)(UnityEngine::Object*);
String* GetDeviceIDMet(UnityEngine::Object* a) {    
    return CreateMonoString("b6d5b9ae-45a0-038c-d3de-cbabf9d2574a");
}
// 此处为加密后的设备码，作的一个base64加密
//在输入框里输入：OTEyRDk3MkI4NTM5MDM4QjkxOUIyQjNCMzkxQjMzOUYzMTM1M0Y4OTA5MDM4QjlCOUI4NTk1MkI4RDk3MzMyNTlCOUIyOTNEMDMwMzAz 912D972B8539038B919B2B3B391B339F31353F8909038B9B9B85952B8D9733259B9B293D030303 解锁
bool (*old_IsAprilFools)();
bool IsAprilFoolsMet() {
    return true;
}
bool (*old_IsHalloweenWeek)();
bool IsHalloweenWeekMet() {
    return true;
}
enum Portal
{
    _None,
    EndOfLevel,
    LastLevelPlayed,
    CalibrationScene,
    EditorScene,
    CustomLevelsScene,
    RDSteamPage,
    PreviousLevel,
    NextLevel,
    LowerSpeed,
    HigherSpeed,
    GoToLevel,
    GoToLevelSpeedTrial,
    GoToWorldBossIfReached,
    TaroDLCMapExit,
    TaroDLCMap,
    PuzzleTest,
    Puzzle1,
    Puzzle2,
    Puzzle3,
    TaroDLCMap3,
    VegaDLCMap,
    Minesweeper,
    MultiPlayer,
    FeatureConfig
};
void destroyPlanets(UnityEngine::Object* controllerInstance) {
    auto planetType = Defaults::Get<scrPlanet>();
    auto scrPlanetClass = planetType.ToClass();
    Class scrControllerClass = Class("", "scrController");
    Field<List<UnityEngine::Object*>*> availablePlanetsField = 
        scrControllerClass.GetField("availablePlanets");
    List<UnityEngine::Object*>* availablePlanets = availablePlanetsField[controllerInstance].Get();
    for (int i = 0; i < availablePlanets->GetSize(); i++) {
        UnityEngine::Object* planet = availablePlanets->GetData()[i];
        if (!planet) continue;
        Field<bool> dummyPlanetsField = scrPlanetClass.GetField("dummyPlanets");
        if (dummyPlanetsField[planet].Get()) {
            Method<void> destroyMethod = scrPlanetClass.GetMethod("Destroy");
            destroyMethod[planet].Call();
        }
    }
}

void SetPlanetCount(int count) {
    auto floorType = Defaults::Get<scrFloor>();
    auto scrFloorClass = floorType.ToClass();
    Class scrControllerClass = Class("", "scrController");
    UnityEngine::Object* controllerInstance = getFieldValue<UnityEngine::Object *>("","scrController","_instance");
    destroyPlanets(controllerInstance);
    Method<void> resetNumPlanetsMethod = scrControllerClass.GetMethod("ResetNumPlanets");
    resetNumPlanetsMethod[controllerInstance].Call();
    Method<void> setNumPlanetsMethod = scrControllerClass.GetMethod("SetNumPlanets", 3);
    setNumPlanetsMethod[controllerInstance].Call(count, nullptr, -1);
    auto objectClass = Class("UnityEngine", "Object");
    Method<UnityEngine::Object*> findObjectsOfType = objectClass.GetMethod("FindObjectsOfType", 0);
    Method<Array<UnityEngine::Object*>*> FloorObject = findObjectsOfType
    .GetGeneric({Class("", "scrFloor")});
    Array<UnityEngine::Object*>* floors = FloorObject.Call();
    Field<int> numPlanetsField = scrFloorClass.GetField("numPlanets");
    if (floors != nullptr) {
    for (int i = 0; i < floors->GetCapacity(); i++) {
        UnityEngine::Object* floor = floors->GetData()[i];
        if (!floor) continue;
        int Num = (int)Il2CppGetFieldOffset(assembly_csharp, "", "scrFloor", "numPlanets");
        *(int*)((uint64_t)floor + Num) = count;
        }
    }
}

void Postfix_scnLevelSelect_Start() {
    auto GameObjectClass = Class("UnityEngine", "GameObject");
    auto TransformClass = Class("UnityEngine", "Transform");
    auto ObjectClass = Class("UnityEngine", "Object");
    Method<UnityEngine::Object*> FindMethod = GameObjectClass.GetMethod("Find", 1);
    Method<UnityEngine::Object*> InstantiateMethod = ObjectClass.GetMethod("Instantiate", {"original", "parent"});
    UnityEngine::Object* floorCalibration = FindMethod.Call(
        CreateMonoString("FloorCalibration")
    );
    UnityEngine::Object* outerRing = FindMethod.Call(
        CreateMonoString("outer ring")
    );
    Method<UnityEngine::Object*> get_transform_Method = GameObjectClass.GetMethod("get_transform");
    UnityEngine::Object* outerRingTransform = get_transform_Method[outerRing].Call();
    UnityEngine::Object* newFloor = InstantiateMethod.Call(
         floorCalibration, outerRingTransform
    );
    Method<void> set_name_Method = ObjectClass.GetMethod("set_name");
    set_name_Method[newFloor].Call(CreateMonoString("FloorText"));
    UnityEngine::Object* newFloorTransform = get_transform_Method[newFloor].Call();
    Method<void> set_position_Method = TransformClass.GetMethod("set_position", 1);
    Vector3 newPosition = Vector3(3.0f, 1.0f, 0.0f);
    set_position_Method[newFloorTransform].Call(newPosition);
    auto scrFloorClass = Class("", "scrFloor");
    Method<UnityEngine::Object*> GetComponent_Method = GameObjectClass.GetMethod("GetComponent", 0);
    Method<UnityEngine::Object*> GetComponentGeneric = GetComponent_Method.GetGeneric({scrFloorClass});
    UnityEngine::Object* scrFloorComp = GetComponentGeneric[newFloor].Call();
    Field<Portal> levelnumberField = scrFloorClass.GetField("levelnumber");
    levelnumberField[scrFloorComp].Set(LastLevelPlayed);
    Field<UnityEngine::Object*> floorRendererField = scrFloorClass.GetField("floorRenderer");
    UnityEngine::Object* renderer = floorRendererField[scrFloorComp].Get();
    Method<void> set_enabled_Method = Class("UnityEngine", "Renderer").GetMethod("set_enabled");
    set_enabled_Method[renderer].Call(true);
    SetActive(newFloor, true);
    UnityEngine::Object* canvasWorld = FindMethod.Call(
        CreateMonoString("Canvas World")
    );
    UnityEngine::Object* canvasTransform = get_transform_Method[canvasWorld].Call();
    UnityEngine::Object* calibration = FindMethod.Call(
        CreateMonoString("Calibration")
    );
    UnityEngine::Object* newTextObj = InstantiateMethod.Call(
        calibration, canvasTransform
    );
    auto scrTextChangerClass = Class("", "scrTextChanger");
    Method <UnityEngine::Object*> GetComponentTextChanger = GetComponent_Method.GetGeneric({scrTextChangerClass});
    UnityEngine::Object* textChangerComp = GetComponentTextChanger[newTextObj].Call();
    Method<void> DestroyImmediate_Method = ObjectClass.GetMethod("DestroyImmediate", 1);
    DestroyImmediate_Method.Call(textChangerComp);
    auto TextClass = Class("UnityEngine.UI", "Text");
    Method<UnityEngine::Object*> GetComponentText = GetComponent_Method.GetGeneric({TextClass});
    UnityEngine::Object* textComp = GetComponentText[newTextObj].Call();
    Method<void> set_text_Method = TextClass.GetMethod("set_text");
    set_text_Method[textComp].Call(CreateMonoString("Text"));
    set_name_Method[newTextObj].Call(CreateMonoString("Text"));
    UnityEngine::Object* textTransform = get_transform_Method[newTextObj].Call();
    Vector3 textPosition = Vector3(4.9f, 1.0f, 72.32f);
    set_position_Method[textTransform].Call(textPosition);
}
void (*orig_scnLevelSelect_Start)(UnityEngine::Object*);
void scnLevelSelect_Start(UnityEngine::Object* instance) {
    orig_scnLevelSelect_Start(instance);
    Postfix_scnLevelSelect_Start();
    //SetPlanetCount(4);
}

bool (*orig_ContainsChinese_Hook)();
bool ContainsChinese_Value() {
  return true;
}

// 阻断不死模式被装饰物碰撞箱干死
void (*orig_HitboxTriggerAction)(UnityEngine::Object*,UnityEngine::Object*);
void HitboxTriggerAction(UnityEngine::Object*instance,UnityEngine::Object* planet) {
    float NegativeInfinity = -numeric_limits<float>::infinity();
    Field<HitboxType> HitboxField = Class("","scrDecoration").GetField("hitbox");
    HitboxType _static = HitboxField[instance].Get();
    Class ADOBaseClass = Class("", "ADOBase");
    Method<UnityEngine::Object*> get_controller = ADOBaseClass.GetMethod("get_controller");
    Field<bool> gameworld = Class("", "scrController").GetField("gameworld");
    if (!gameworld[get_controller.Call()].Get()) { HitboxField[instance].Set(_static); orig_HitboxTriggerAction(instance, planet); return; }
    if (HitboxField[instance].Get() != HitboxType::Kill) { HitboxField[instance].Set(_static); orig_HitboxTriggerAction(instance, planet); return; }
    Property<bool> autoPro = Class("", "RDC").GetProperty("auto");
    if (autoPro.Get()) { HitboxField[instance].Set(_static); orig_HitboxTriggerAction(instance, planet); return; }
    Field<bool> noFaill = Class("", "scrController").GetField("noFail");
    if (!noFaill[get_controller.Call()].Get()) { HitboxField[instance].Set(_static); orig_HitboxTriggerAction(instance, planet); return; }
    HitboxField[instance].Set(HitboxType::None);
    Field<bool> iFrames = Class("", "scrPlanet").GetField("iFrames");
    Field<bool> hitOnce = Class("", "scrDecoration").GetField("hitOnce");
    if (planet != NULL && iFrames[planet].Get() > 0) { HitboxField[instance].Set(_static); orig_HitboxTriggerAction(instance, planet); return; }
    if (hitOnce[instance].Get()) { HitboxField[instance].Set(_static); orig_HitboxTriggerAction(instance, planet); return; }
    Field<UnityEngine::Object*> mistakesManager = Class("", "scrController").GetField("mistakesManager");
    Field<UnityEngine::Object*> errorMeter = Class("", "scrController").GetField("errorMeter");
    Field<UnityEngine::Object*> chosenPlanet = Class("", "scrController").GetField("chosenplanet");
    Method<void> ErrorMeter_AddHit = Class("", "scrHitErrorMeter").GetMethod("AddHit");
    Method<void> MistakesManager_AddHit = Class("", "scrMistakesManager").GetMethod("AddHit");
    Method<UnityEngine::Object*> MarkFail = Class("", "scrPlanet").GetMethod("MarkFail");
    Method<void> BlinkForSeconds = Class("", "scrMissIndicator").GetMethod("BlinkForSeconds");

    MistakesManager_AddHit[mistakesManager[get_controller.Call()].Get()].Call(HitMargin::FailOverload);

    ErrorMeter_AddHit[errorMeter[get_controller.Call()].Get()].Call(NegativeInfinity);

    BlinkForSeconds[MarkFail[chosenPlanet[get_controller.Call()].Get()].Call()].Call(30);

    orig_HitboxTriggerAction(instance, planet);
    HitboxField[instance].Set(_static);
}

struct HookManager : public UnityEngine::MonoBehaviour {
BNM_CustomClass(HookManager,
                CompileTimeClassBuilder("Sept", "HookManager", "Assembly-CSharp").Build(),
                CompileTimeClassBuilder("UnityEngine", "MonoBehaviour", "UnityEngine.CoreModule").Build(),
                {},
                {},
                CompileTimeClassBuilder("", "").Build());

    // 静态钩子方法
    static bool Hooked_get_debug() {
        
        // 获取RDC类
        Class rdcClass = Class("", "RDC");
        
        // 获取原get_auto方法
        Method<bool> get_auto_method = rdcClass.GetMethod("get_auto");
        
        // 调用原方法并返回修改后的值
        return !get_auto_method.Call();
    }
    void Constructor() {
        UnityEngine::MonoBehaviour tmp = *this;
        *this = HookManager();
        *((UnityEngine::MonoBehaviour *)this) = tmp;
    }
    void Awake() {
    BNM_CallCustomMethodOrigin(Awake, this);
    }
    void Start() {
    BNM_CallCustomMethodOrigin(Start, this);
    Property<bool> autoPro = Class("", "RDC").GetProperty("auto");
    autoPro.Set(true);
    }
    void Update() {
    BNM_CallCustomMethodOrigin(Update, this);
    }


    BNM_CustomMethod(Hooked_get_debug, 
                     true,  // 静态方法
                     Get<bool>(),  // 返回类型
                     "debug");  // 方法名
        
    BNM_CustomMethod(Awake, false, Get<void>(), "Awake");
    BNM_CustomMethod(Update, false, Get<void>(), "Update");
    BNM_CustomMethod(Start, false, Get<void>(), "Start");
    BNM_CustomMethod(Constructor, false, Get<void>(), ".ctor");
};

void (*orig_HookManager_Update)(UnityEngine::Object*);
void HookManager_Update(UnityEngine::Object*instance) {
    Class RDConstants = Class("", "RDConstants");
    UnityEngine::Object* internalData = getFieldValue<UnityEngine::Object *>("","RDConstants","internalData"); //存储实例
    Field<bool> debug_Bool = RDConstants.GetField("debug");
    Field<bool> get_auto = RDConstants.GetField("auto");
    debug_Bool[internalData].Set(!get_auto[internalData].Get());
    orig_HookManager_Update(instance);
}
bool (*orig_debug)();
bool debug() {
    Class HookManager = Class("Sept", "HookManager");
    Method<bool>HookManager_debug = HookManager.GetMethod("debug");
    return HookManager_debug.Call();
}

bool (*orig_Debug_Met)();
bool Debug_Met() {
    return true;
}
void start() {
    assembly_csharp = Image("Assembly-CSharp");
    unityCore = Image("UnityEngine.CoreModule");
    unityUI = Image("UnityEngine.UI");
    auto debug_Hook = Class("","RDC").GetMethod("get_debug");
//    BasicHook(debug_Hook, debug, orig_debug);
    
    /*
    unityCore = GetImage(GetAssembly("UnityEngine.CoreModule"));
    assembly_csharp = GetImage(GetAssembly("Assembly-CSharp"));
    */
    //unityCore = GetImage("UnityEngine.CoreModule");
    //assembly_csharp = GetImage("Assembly-CSharp");
    auto GetDeviceID = Class("StArray","scnVerify").GetMethod("GetDeviceID");
    //BasicHook(GetDeviceID, GetDeviceIDMet,old_GetDeviceID);
    auto Validate_single = Class("ADOFAI","PropertyInfo").GetMethod("Validate", {CompileTimeClassBuilder("System", "Single").Build()});
    //BasicHook(Validate_single, Validate_floatMet,old_Validate_float);
    auto Validate_int = Class("ADOFAI","PropertyInfo").GetMethod("Validate", {CompileTimeClassBuilder("System", "Int32").Build()});
    //BasicHook(Validate_int, Validate_intMet,old_Validate_int);
    auto betaBuild_Hook = Class("", "scrEnableIfBeta").GetMethod("Awake");
    BasicHook(betaBuild_Hook,BetaBuild,old_BetaBuild);
    auto News = Class("","NewsSign").GetMethod("ShowNews");
    //BasicHook(News,ShowNews,old_ShowNews);
    auto RDC_Debug_Hook = Class("", "RDC").GetMethod("get_debug");
    //BasicHook(RDC_Debug_Hook, Debug_Met, orig_Debug_Met);
    auto scrUIController_Update_Hook = Class("","scrUIController").GetMethod("Update");
    BasicHook(scrUIController_Update_Hook, UIController_Update,old_UIController_Update);
    auto OttoButtonController_Update_Hook = Class("","OttoButtonController").GetMethod("Update");
    BasicHook(OttoButtonController_Update_Hook, OttoButtonController_Update,old_OttoButtonController_Update);
    auto ShowIfDebug_Update_Hook = Class("","scrShowIfDebug").GetMethod("Update");
    BasicHook(ShowIfDebug_Update_Hook, ShowIfDebug_Update,old_ShowIfDebug_Update);
    auto ExtraUtils_getOnGui_Hook = Class("","ExtraUtils").GetMethod("getOnGUI");
    BasicHook(ExtraUtils_getOnGui_Hook, getOnGui,old_getOnGui);
    auto scrRing_Update_Hook = Class("","scrRing").GetMethod("Update");
    //BasicHook(scrRing_Update_Hook, scrRing_Update,old_scrRing_Update);
    auto scnEditor_Play_Hook = Class("","scnEditor").GetMethod("Play");
	BasicHook(scnEditor_Play_Hook,scnEditor_Play,old_scnEditor_Play);
    auto IsAprilFools = Class("","ADOBase").GetMethod("IsAprilFools");
    BasicHook(IsAprilFools, IsAprilFoolsMet,old_IsAprilFools);
    auto IsHalloweenWeek = Class("","ADOBase").GetMethod("IsHalloweenWeek");
    BasicHook(IsHalloweenWeek, IsHalloweenWeekMet,old_IsHalloweenWeek);
    auto scnLevelSelect_Start_Hook = Class("","scnLevelSelect").GetMethod("Start");
    BasicHook(scnLevelSelect_Start_Hook,scnLevelSelect_Start,orig_scnLevelSelect_Start);
    auto HitBox_Hook = Class("","scrDecoration").GetMethod("HitboxTriggerAction");
    //BasicHook(HitBox_Hook,HitboxTriggerAction,orig_HitboxTriggerAction);
    auto Dev_ = Class("ADOFAI", "LevelEventInfo").GetMethod("get_isActive");
    //BasicHook(Dev_, IsEditorMet, old_isEditor);
    auto Dev = Class("UnityEngine", "Application", Image("UnityEngine.CoreModule")).GetMethod("get_isEditor");
    //BasicHook(Dev, IsEditorMet, old_isEditor);

    //auto Dev_d = Il2CppGetMethodOffset(unityCore, "UnityEngine", "Application", "get_isEditor", 0);
    //DobbyHook(Dev_d, (void*)IsEditorMet,(void**)&old_isEditor);
}
/*
bool m_CachedPtr(void *unity_obj) {
    if (!unity_obj) return false;
    #if defined(__aarch64__)
    return (*(uintptr_t*)((uintptr_t)unity_obj + 0x10) != 0);
    #else
    return (*(uintptr_t*)((uintptr_t)unity_obj + 0x8) != 0);
    #endif
}
typedef void (ARM64_CALL *SetDebug_t)(bool value);
SetDebug_t SetDebug = nullptr;

typedef void (ARM64_CALL *LoadScene_t)(String* sceneName);
LoadScene_t LoadScene = nullptr;

void LoadNewScene(String* sceneName) {
    if (LoadScene) {
        LoadScene(sceneName);
    } else {
        LOGD("LoadScene not found!");
    }
}

void SetDebug_Met(bool value) {
    if (SetDebug) {
        SetDebug(value);
    } else {
        LOGD("SetDebug not found!");
    }
}

void (*old_Update)(UnityEngine::Object*);
void Update(UnityEngine::Object*instance) {

    //SetDebug_Met(false);
    //LoadNewScene(CreateMonoString("scnLevelSelect"));
    old_Update(instance);
}

void InitializationMethod() {
    char* loadSceneArgs[] = {(char*)"System.String"};
    LoadScene = (LoadScene_t)Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "ADOBase", "LoadScene", loadSceneArgs, 1);
    SetDebug = (SetDebug_t)Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "RDC", "set_debug", 1);

    auto Update_Hook = (void*)Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "scnLevelSelect", "Update", 0);
    //DobbyHook(Update_Hook, (void*)Update, (void**)&old_Update);
}
*/
/*
void *main_thread(void *) {
    while (!G_IL2CPP) {
        
    G_IL2CPP = GetIL2CPPBase();
    
    sleep(1);
    }
    InitIL2CPPExports();
    
    //unityCore = GetImage(GetAssembly("UnityEngine.CoreModule"));
    //assembly_csharp = GetImage(GetAssembly("Assembly-CSharp"));
    
    unityCore = GetImage("UnityEngine.CoreModule");
    assembly_csharp = GetImage("Assembly-CSharp");

    sleep(5);  
    //auto LevelSelect_ = (void*)Il2CppGetMethodOffset("Assembly-CSharp.dll", "", "scnLevelSelect", "Start");
    //DobbyHook(LevelSelect_, (void*)scnLevelSelect_Start,(void**)&orig_scnLevelSelect_Start);
    //auto Dev_d = Il2CppGetMethodOffset(unityCore, "UnityEngine", "Application", "get_isEditor", 0);
    //DobbyHook(Dev_d, (void*)IsEditorMet,(void**)&old_isEditor);
    
    //auto InstantiateMethod = (UnityEngine::Object*)Il2CppGetMethodOffset("UnityEngine.CoreModule.dll", "UnityEngine", "Object", "Instantiate", {"original", "parent"});
    
    pthread_exit(nullptr);
    return nullptr;

}
__attribute__((constructor))
void lib_main() {
    pthread_t ptid;
    pthread_create(&ptid, nullptr, main_thread, nullptr);
}
*/