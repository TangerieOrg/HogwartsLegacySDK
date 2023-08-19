#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMotionMatcherBPInterface.hpp"
#include "UObject.hpp"
UMotionMatcherBPInterface* UMotionMatcherBPInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.MotionMatcherBPInterface");
    return (UMotionMatcherBPInterface*)res;
}
UObject* UMotionMatcherBPInterface::GetGoalDelegate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.MotionMatcherBPInterface.GetGoalDelegate"));
    struct Params_GetGoalDelegate {
        UObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGoalDelegate params{};
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
