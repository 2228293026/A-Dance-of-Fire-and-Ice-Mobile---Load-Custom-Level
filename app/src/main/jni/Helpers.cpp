#include "Helpers.h"
#include "Cache.h"

using namespace BNM;

void SetActive(UnityEngine::Object* gameObject, bool active) {
    if (!gameObject) return;
    g_setActiveMethod[gameObject].Call(active);
}

UnityEngine::Object* GetGameObject(UnityEngine::Object* component) {
    if (!component) return nullptr;
    return g_getGameObjectMethod[component].Call();
}

Color white() { return Color(1,1,1,1); }
Color gray()  { return Color(0.5,0.5,0.5,1); }
Color red()   { return Color(1,0,0,1); }
