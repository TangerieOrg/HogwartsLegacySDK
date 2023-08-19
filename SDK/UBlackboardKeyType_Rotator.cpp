#include "UBlackboardKeyType.hpp"
#include "UBlackboardKeyType_Rotator.hpp"
UBlackboardKeyType_Rotator* UBlackboardKeyType_Rotator::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BlackboardKeyType_Rotator");
    return (UBlackboardKeyType_Rotator*)res;
}
