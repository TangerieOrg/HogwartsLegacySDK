#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Object.hpp"
#include "UClass.hpp"
UBlackboardKeyType_Object* UBlackboardKeyType_Object::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Object");
    return (UBlackboardKeyType_Object*)res;
}
