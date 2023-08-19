#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Bool.hpp"
UBlackboardKeyType_Bool* UBlackboardKeyType_Bool::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Bool");
    return (UBlackboardKeyType_Bool*)res;
}
