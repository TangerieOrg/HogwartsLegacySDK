#include "AActor.hpp"
#include "APlayerCameraManager.hpp"
#include "FPostProcessSettings.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCameraModifier.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraModifier* UCameraModifier::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraModifier");
    return (UCameraModifier*)res;
}
bool UCameraModifier::IsDisabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraModifier.IsDisabled"));
    struct Params_IsDisabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDisabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UCameraModifier::GetViewTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraModifier.GetViewTarget"));
    struct Params_GetViewTarget {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetViewTarget params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UCameraModifier::DisableModifier(bool bImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraModifier.DisableModifier"));
    struct Params_DisableModifier {
        bool bImmediate; // 0x0
    }; // Size: 0x1
    Params_DisableModifier params{};
    params.bImmediate = (bool)bImmediate;
    ProcessEvent(func, &params);
}
void UCameraModifier::EnableModifier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraModifier.EnableModifier"));
    struct Params_EnableModifier {
    }; // Size: 0x0
    Params_EnableModifier params{};
    ProcessEvent(func, &params);
}
void UCameraModifier::BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraModifier.BlueprintModifyPostProcess"));
    struct Params_BlueprintModifyPostProcess {
        float DeltaTime; // 0x0
        float PostProcessBlendWeight; // 0x4
        char pad_8[0x8];
        FPostProcessSettings PostProcessSettings; // 0x10
    }; // Size: 0x600
    Params_BlueprintModifyPostProcess params{};
    params.DeltaTime = (float)DeltaTime;
    params.PostProcessBlendWeight = (float)PostProcessBlendWeight;
    params.PostProcessSettings = (FPostProcessSettings)PostProcessSettings;
    ProcessEvent(func, &params);
    PostProcessBlendWeight = params.PostProcessBlendWeight;
    PostProcessSettings = params.PostProcessSettings;
}
void UCameraModifier::BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraModifier.BlueprintModifyCamera"));
    struct Params_BlueprintModifyCamera {
        float DeltaTime; // 0x0
        FVector ViewLocation; // 0x4
        FRotator ViewRotation; // 0x10
        float FOV; // 0x1c
        FVector NewViewLocation; // 0x20
        FRotator NewViewRotation; // 0x2c
        float NewFOV; // 0x38
    }; // Size: 0x3c
    Params_BlueprintModifyCamera params{};
    params.DeltaTime = (float)DeltaTime;
    params.ViewLocation = (FVector)ViewLocation;
    params.ViewRotation = (FRotator)ViewRotation;
    params.FOV = (float)FOV;
    params.NewViewLocation = (FVector)NewViewLocation;
    params.NewViewRotation = (FRotator)NewViewRotation;
    params.NewFOV = (float)NewFOV;
    ProcessEvent(func, &params);
    NewViewLocation = params.NewViewLocation;
    NewFOV = params.NewFOV;
    NewViewRotation = params.NewViewRotation;
}
