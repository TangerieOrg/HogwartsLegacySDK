#include "EAttachCameraBillBoardType.hpp"
#include "EAttachCameraType.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAttachCameraComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UAttachCameraComponent* UAttachCameraComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.AttachCameraComponent");
    return (UAttachCameraComponent*)res;
}
void UAttachCameraComponent::ResetChildRotations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.AttachCameraComponent.ResetChildRotations"));
    struct Params_ResetChildRotations {
    }; // Size: 0x0
    Params_ResetChildRotations params{};
    ProcessEvent(func, &params);
}
void UAttachCameraComponent::SetupCopyToRootComponent(bool copyToRootComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.AttachCameraComponent.SetupCopyToRootComponent"));
    struct Params_SetupCopyToRootComponent {
        bool copyToRootComponent; // 0x0
    }; // Size: 0x1
    Params_SetupCopyToRootComponent params{};
    params.copyToRootComponent = (bool)copyToRootComponent;
    ProcessEvent(func, &params);
}
bool UAttachCameraComponent::GetCamera(FVector& Eye, FRotator& Orientation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.AttachCameraComponent.GetCamera"));
    struct Params_GetCamera {
        FVector Eye; // 0x0
        FRotator Orientation; // 0xc
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetCamera params{};
    params.Eye = (FVector)Eye;
    params.Orientation = (FRotator)Orientation;
    ProcessEvent(func, &params);
    Eye = params.Eye;
    Orientation = params.Orientation;
    return (bool)params.ReturnValue;
}
void UAttachCameraComponent::ResetChildLocations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.AttachCameraComponent.ResetChildLocations"));
    struct Params_ResetChildLocations {
    }; // Size: 0x0
    Params_ResetChildLocations params{};
    ProcessEvent(func, &params);
}
bool UAttachCameraComponent::GetCameraRotation(FRotator& Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.AttachCameraComponent.GetCameraRotation"));
    struct Params_GetCameraRotation {
        FRotator Rotation; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetCameraRotation params{};
    params.Rotation = (FRotator)Rotation;
    ProcessEvent(func, &params);
    Rotation = params.Rotation;
    return (bool)params.ReturnValue;
}
void UAttachCameraComponent::ResetAllChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.AttachCameraComponent.ResetAllChildren"));
    struct Params_ResetAllChildren {
    }; // Size: 0x0
    Params_ResetAllChildren params{};
    ProcessEvent(func, &params);
}
bool UAttachCameraComponent::GetCameraLocation(FVector& Eye) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.AttachCameraComponent.GetCameraLocation"));
    struct Params_GetCameraLocation {
        FVector Eye; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetCameraLocation params{};
    params.Eye = (FVector)Eye;
    ProcessEvent(func, &params);
    Eye = params.Eye;
    return (bool)params.ReturnValue;
}
