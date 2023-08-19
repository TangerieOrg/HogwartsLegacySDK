#include "FGuid.hpp"
#include "UARComponent.hpp"
#include "UARTrackedGeometry.hpp"
#include "UFunction.hpp"
#include "UMRMeshComponent.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
UARComponent* UARComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARComponent");
    return (UARComponent*)res;
}
void UARComponent::UpdateVisualization() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARComponent.UpdateVisualization"));
    struct Params_UpdateVisualization {
    }; // Size: 0x0
    Params_UpdateVisualization params{};
    ProcessEvent(func, &params);
}
void UARComponent::SetNativeID(FGuid NativeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARComponent.SetNativeID"));
    struct Params_SetNativeID {
        FGuid NativeID; // 0x0
    }; // Size: 0x10
    Params_SetNativeID params{};
    params.NativeID = (FGuid)NativeID;
    ProcessEvent(func, &params);
}
void UARComponent::ReceiveRemove() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARComponent.ReceiveRemove"));
    struct Params_ReceiveRemove {
    }; // Size: 0x0
    Params_ReceiveRemove params{};
    ProcessEvent(func, &params);
}
void UARComponent::OnRep_Payload() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARComponent.OnRep_Payload"));
    struct Params_OnRep_Payload {
    }; // Size: 0x0
    Params_OnRep_Payload params{};
    ProcessEvent(func, &params);
}
UMRMeshComponent* UARComponent::GetMRMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARComponent.GetMRMesh"));
    struct Params_GetMRMesh {
        UMRMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMRMesh params{};
    ProcessEvent(func, &params);
    return (UMRMeshComponent*)params.ReturnValue;
}
