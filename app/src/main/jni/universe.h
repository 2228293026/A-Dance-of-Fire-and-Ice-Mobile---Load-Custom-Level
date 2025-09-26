
#include "BNM/include/BNM/BasicMonoStructures.hpp"
#include "BNM/include/BNM/Il2CppHeaders.hpp"
#include "BNM/include/BNM/Class.hpp"
#include "BNM/include/BNM/ClassesManagement.hpp"
#include "BNM/include/BNM/ComplexMonoStructures.hpp"
#include "BNM/include/BNM/Coroutine.hpp"
#include "BNM/include/BNM/DebugMessages.hpp"
#include "BNM/include/BNM/Delegates.hpp"
#include "BNM/include/BNM/Event.hpp"
#include "BNM/include/BNM/EventBase.hpp"
#include "BNM/include/BNM/Exceptions.hpp"
#include "BNM/include/BNM/Field.hpp"
#include "BNM/include/BNM/FieldBase.hpp"
#include "BNM/include/BNM/Image.hpp"
#include "BNM/src/private/Internals.hpp"
#include "BNM/include/BNM/Loading.hpp"
#include "BNM/include/BNM/Method.hpp"
#include "BNM/include/BNM/MethodBase.hpp"
#include "BNM/include/BNM/Operators.hpp"
#include "BNM/include/BNM/Property.hpp"
#include "BNM/include/BNM/PropertyBase.hpp"
#include "BNM/include/BNM/UnityStructures.hpp"
#include "BNM/include/BNM/Utils.hpp"
#include "BNM/include/BNM/Defaults.hpp"

#include "BNM/UserSettings/Il2CppMethodNames.hpp"

void start();
void InitIL2CPPExports();
template <typename T>
T callMethod(std::string nameSpace,std::string className,std::string methodName,BNM::IL2CPP::Il2CppObject *instance = nullptr);
template <typename T>
T getFieldValue(std::string NS,std::string className,std::string fieldName,BNM::IL2CPP::Il2CppObject *instance = nullptr);

BNM::IL2CPP::Il2CppAssembly *GetAssembly(const char *name);
BNM::IL2CPP::Il2CppImage *GetImage(BNM::IL2CPP::Il2CppAssembly *assembly);
BNM::IL2CPP::Il2CppImage *GetImage(const char *assemblyName);