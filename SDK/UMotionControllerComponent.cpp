#include "EControllerHand.hpp"
#include "ETrackingStatus.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMotionControllerComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMesh.hpp"
void UMotionControllerComponent::SetDisplayModelSource(FName NewDisplayModelSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource"));
    struct Params_SetDisplayModelSource {
        FName NewDisplayModelSource; // 0x0
    }; // Size: 0x8
    Params_SetDisplayModelSource params{};
    params.NewDisplayModelSource = (FName)NewDisplayModelSource;
    ProcessEvent(func, &params);
}
UMotionControllerComponent* UMotionControllerComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/HeadMountedDisplay.MotionControllerComponent");
    return (UMotionControllerComponent*)res;
}
void UMotionControllerComponent::SetTrackingSource(EControllerHand NewSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource"));
    struct Params_SetTrackingSource {
        EControllerHand NewSource; // 0x0
    }; // Size: 0x1
    Params_SetTrackingSource params{};
    params.NewSource = (EControllerHand)NewSource;
    ProcessEvent(func, &params);
}
void UMotionControllerComponent::SetTrackingMotionSource(FName NewSource) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource"));
    struct Params_SetTrackingMotionSource {
        FName NewSource; // 0x0
    }; // Size: 0x8
    Params_SetTrackingMotionSource params{};
    params.NewSource = (FName)NewSource;
    ProcessEvent(func, &params);
}
void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel"));
    struct Params_SetShowDeviceModel {
        bool bShowControllerModel; // 0x0
    }; // Size: 0x1
    Params_SetShowDeviceModel params{};
    params.bShowControllerModel = (bool)bShowControllerModel;
    ProcessEvent(func, &params);
}
void UMotionControllerComponent::SetAssociatedPlayerIndex(int32_t NewPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex"));
    struct Params_SetAssociatedPlayerIndex {
        int32_t NewPlayer; // 0x0
    }; // Size: 0x4
    Params_SetAssociatedPlayerIndex params{};
    params.NewPlayer = (int32_t)NewPlayer;
    ProcessEvent(func, &params);
}
void UMotionControllerComponent::SetCustomDisplayMesh(UStaticMesh* NewDisplayMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh"));
    struct Params_SetCustomDisplayMesh {
        UStaticMesh* NewDisplayMesh; // 0x0
    }; // Size: 0x8
    Params_SetCustomDisplayMesh params{};
    params.NewDisplayMesh = (UStaticMesh*)NewDisplayMesh;
    ProcessEvent(func, &params);
}
void UMotionControllerComponent::OnMotionControllerUpdated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated"));
    struct Params_OnMotionControllerUpdated {
    }; // Size: 0x0
    Params_OnMotionControllerUpdated params{};
    ProcessEvent(func, &params);
}
bool UMotionControllerComponent::IsTracked() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked"));
    struct Params_IsTracked {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTracked params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EControllerHand UMotionControllerComponent::GetTrackingSource() {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource"));
    struct Params_GetTrackingSource {
        EControllerHand ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTrackingSource params{};
    ProcessEvent(func, &params);
    return (EControllerHand)params.ReturnValue;
}
float UMotionControllerComponent::GetParameterValue(FName InName, bool& bValueFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue"));
    struct Params_GetParameterValue {
        FName InName; // 0x0
        bool bValueFound; // 0x8
        char pad_9[0x3];
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetParameterValue params{};
    params.InName = (FName)InName;
    params.bValueFound = (bool)bValueFound;
    ProcessEvent(func, &params);
    bValueFound = params.bValueFound;
    return (float)params.ReturnValue;
}
FVector UMotionControllerComponent::GetHandJointPosition(int32_t jointIndex, bool& bValueFound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition"));
    struct Params_GetHandJointPosition {
        int32_t jointIndex; // 0x0
        bool bValueFound; // 0x4
        char pad_5[0x3];
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetHandJointPosition params{};
    params.jointIndex = (int32_t)jointIndex;
    params.bValueFound = (bool)bValueFound;
    ProcessEvent(func, &params);
    bValueFound = params.bValueFound;
    return (FVector)params.ReturnValue;
}
