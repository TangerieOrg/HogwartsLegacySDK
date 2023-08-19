#include "ECameraProjectionMode\Type.hpp"
#include "FMinimalViewInfo.hpp"
#include "FPostProcessSettings.hpp"
#include "UCameraComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void UCameraComponent::SetOrthoWidth(float InOrthoWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetOrthoWidth"));
    struct Params_SetOrthoWidth {
        float InOrthoWidth; // 0x0
    }; // Size: 0x4
    Params_SetOrthoWidth params{};
    params.InOrthoWidth = (float)InOrthoWidth;
    ProcessEvent(func, &params);
}
UCameraComponent* UCameraComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraComponent");
    return (UCameraComponent*)res;
}
void UCameraComponent::SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetUseFieldOfViewForLOD"));
    struct Params_SetUseFieldOfViewForLOD {
        bool bInUseFieldOfViewForLOD; // 0x0
    }; // Size: 0x1
    Params_SetUseFieldOfViewForLOD params{};
    params.bInUseFieldOfViewForLOD = (bool)bInUseFieldOfViewForLOD;
    ProcessEvent(func, &params);
}
void UCameraComponent::SetProjectionMode(ECameraProjectionMode::Type InProjectionMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetProjectionMode"));
    struct Params_SetProjectionMode {
        ECameraProjectionMode::Type InProjectionMode; // 0x0
    }; // Size: 0x1
    Params_SetProjectionMode params{};
    params.InProjectionMode = (ECameraProjectionMode::Type)InProjectionMode;
    ProcessEvent(func, &params);
}
void UCameraComponent::SetOrthoFarClipPlane(float InOrthoFarClipPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetOrthoFarClipPlane"));
    struct Params_SetOrthoFarClipPlane {
        float InOrthoFarClipPlane; // 0x0
    }; // Size: 0x4
    Params_SetOrthoFarClipPlane params{};
    params.InOrthoFarClipPlane = (float)InOrthoFarClipPlane;
    ProcessEvent(func, &params);
}
void UCameraComponent::SetPostProcessBlendWeight(float InPostProcessBlendWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetPostProcessBlendWeight"));
    struct Params_SetPostProcessBlendWeight {
        float InPostProcessBlendWeight; // 0x0
    }; // Size: 0x4
    Params_SetPostProcessBlendWeight params{};
    params.InPostProcessBlendWeight = (float)InPostProcessBlendWeight;
    ProcessEvent(func, &params);
}
void UCameraComponent::SetOrthoNearClipPlane(float InOrthoNearClipPlane) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetOrthoNearClipPlane"));
    struct Params_SetOrthoNearClipPlane {
        float InOrthoNearClipPlane; // 0x0
    }; // Size: 0x4
    Params_SetOrthoNearClipPlane params{};
    params.InOrthoNearClipPlane = (float)InOrthoNearClipPlane;
    ProcessEvent(func, &params);
}
void UCameraComponent::SetFieldOfView(float InFieldOfView) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetFieldOfView"));
    struct Params_SetFieldOfView {
        float InFieldOfView; // 0x0
    }; // Size: 0x4
    Params_SetFieldOfView params{};
    params.InFieldOfView = (float)InFieldOfView;
    ProcessEvent(func, &params);
}
void UCameraComponent::SetConstraintAspectRatio(bool bInConstrainAspectRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetConstraintAspectRatio"));
    struct Params_SetConstraintAspectRatio {
        bool bInConstrainAspectRatio; // 0x0
    }; // Size: 0x1
    Params_SetConstraintAspectRatio params{};
    params.bInConstrainAspectRatio = (bool)bInConstrainAspectRatio;
    ProcessEvent(func, &params);
}
void UCameraComponent::SetAspectRatio(float InAspectRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.SetAspectRatio"));
    struct Params_SetAspectRatio {
        float InAspectRatio; // 0x0
    }; // Size: 0x4
    Params_SetAspectRatio params{};
    params.InAspectRatio = (float)InAspectRatio;
    ProcessEvent(func, &params);
}
void UCameraComponent::RemoveBlendable() {}
void UCameraComponent::OnCameraMeshHiddenChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.OnCameraMeshHiddenChanged"));
    struct Params_OnCameraMeshHiddenChanged {
    }; // Size: 0x0
    Params_OnCameraMeshHiddenChanged params{};
    ProcessEvent(func, &params);
}
void UCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraComponent.GetCameraView"));
    struct Params_GetCameraView {
        float DeltaTime; // 0x0
        char pad_4[0xc];
        FMinimalViewInfo DesiredView; // 0x10
    }; // Size: 0x690
    Params_GetCameraView params{};
    params.DeltaTime = (float)DeltaTime;
    params.DesiredView = (FMinimalViewInfo)DesiredView;
    ProcessEvent(func, &params);
    DesiredView = params.DesiredView;
}
void UCameraComponent::AddOrUpdateBlendable() {}
