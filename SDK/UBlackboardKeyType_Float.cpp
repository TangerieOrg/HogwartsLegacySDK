#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Float.hpp"
UBlackboardKeyType_Float* UBlackboardKeyType_Float::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Float");
    return (UBlackboardKeyType_Float*)res;
}
