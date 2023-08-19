#include "FBlackboardKeySelector.hpp"
#include "UBTTask_Wait.hpp"
#include "UBTTask_WaitBlackboardTime.hpp"
UBTTask_WaitBlackboardTime* UBTTask_WaitBlackboardTime::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_WaitBlackboardTime");
    return (UBTTask_WaitBlackboardTime*)res;
}
