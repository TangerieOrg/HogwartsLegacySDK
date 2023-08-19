#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UFunction.hpp"
UCameraStackBehaviorBlend* UCameraStackBehaviorBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorBlend");
    return (UCameraStackBehaviorBlend*)res;
}
float UCameraStackBehaviorBlend::GetBlendAlpha() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorBlend.GetBlendAlpha"));
    struct Params_GetBlendAlpha {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetBlendAlpha params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
