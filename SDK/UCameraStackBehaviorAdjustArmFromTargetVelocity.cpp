#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#include "UCameraStackBehaviorAdjustArmFromTargetVelocity.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UFunction.hpp"
UCameraStackBehaviorAdjustArmFromTargetVelocity* UCameraStackBehaviorAdjustArmFromTargetVelocity::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorAdjustArmFromTargetVelocity");
    return (UCameraStackBehaviorAdjustArmFromTargetVelocity*)res;
}
void UCameraStackBehaviorAdjustArmFromTargetVelocity::SetVelocityFilterHalflife(float InHalflife) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorAdjustArmFromTargetVelocity.SetVelocityFilterHalflife"));
    struct Params_SetVelocityFilterHalflife {
        float InHalflife; // 0x0
    }; // Size: 0x4
    Params_SetVelocityFilterHalflife params{};
    params.InHalflife = (float)InHalflife;
    ProcessEvent(func, &params);
}
void UCameraStackBehaviorAdjustArmFromTargetVelocity::SetScaleFilterHalflife(float InHalflife) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorAdjustArmFromTargetVelocity.SetScaleFilterHalflife"));
    struct Params_SetScaleFilterHalflife {
        float InHalflife; // 0x0
    }; // Size: 0x4
    Params_SetScaleFilterHalflife params{};
    params.InHalflife = (float)InHalflife;
    ProcessEvent(func, &params);
}
