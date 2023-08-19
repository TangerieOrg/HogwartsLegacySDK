#include "FCameraCrossBlendBehaviorGroup.hpp"
#include "UCameraStack.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorMultiCrossBlend.hpp"
#include "UFunction.hpp"
UCameraStackBehaviorMultiCrossBlend* UCameraStackBehaviorMultiCrossBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorMultiCrossBlend");
    return (UCameraStackBehaviorMultiCrossBlend*)res;
}
TArray<FCameraCrossBlendBehaviorGroup> UCameraStackBehaviorMultiCrossBlend::GetCrossBlendBehaviorGroups() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorMultiCrossBlend.GetCrossBlendBehaviorGroups"));
    struct Params_GetCrossBlendBehaviorGroups {
        TArray<FCameraCrossBlendBehaviorGroup> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCrossBlendBehaviorGroups params{};
    ProcessEvent(func, &params);
    return (TArray<FCameraCrossBlendBehaviorGroup>)params.ReturnValue;
}
UCameraStackBehaviorMultiCrossBlend* UCameraStackBehaviorMultiCrossBlend::CreateMultiCrossBlendBehavior(UCameraStack* InCameraStack, float InMaxCrossBlendSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorMultiCrossBlend.CreateMultiCrossBlendBehavior"));
    struct Params_CreateMultiCrossBlendBehavior {
        UCameraStack* InCameraStack; // 0x0
        float InMaxCrossBlendSpeed; // 0x8
        char pad_c[0x4];
        UCameraStackBehaviorMultiCrossBlend* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateMultiCrossBlendBehavior params{};
    params.InCameraStack = (UCameraStack*)InCameraStack;
    params.InMaxCrossBlendSpeed = (float)InMaxCrossBlendSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCameraStackBehaviorMultiCrossBlend*)params.ReturnValue;
}
