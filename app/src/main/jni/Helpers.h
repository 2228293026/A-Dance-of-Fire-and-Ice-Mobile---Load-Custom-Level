#ifndef HELPERS_H
#define HELPERS_H

#include "universe.h"

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

// 对象操作
void SetActive(UnityEngine::Object* gameObject, bool active);
UnityEngine::Object* GetGameObject(UnityEngine::Object* component);

// 颜色辅助
Color white();
Color gray();
Color red();

#endif // HELPERS_H
