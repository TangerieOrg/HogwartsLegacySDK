#include "EPoseComponentDebugMode.hpp"
#include "FARPoseUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARPoseComponent.hpp"
#include "UFunction.hpp"
UARPoseComponent* UARPoseComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARPoseComponent");
    return (UARPoseComponent*)res;
}
void UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode"));
    struct Params_SetPoseComponentDebugMode {
        EPoseComponentDebugMode NewDebugMode; // 0x0
    }; // Size: 0x1
    Params_SetPoseComponentDebugMode params{};
    params.NewDebugMode = (EPoseComponentDebugMode)NewDebugMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARPoseComponent::ReceiveAdd(FARPoseUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARPoseUpdatePayload Payload; // 0x0
    }; // Size: 0x40
    Params_ReceiveAdd params{};
    params.Payload = (FARPoseUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARPoseComponent::ServerUpdatePayload(FARPoseUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARPoseUpdatePayload NewPayload; // 0x0
    }; // Size: 0x40
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARPoseUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARPoseComponent::ReceiveUpdate(FARPoseUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARPoseUpdatePayload Payload; // 0x0
    }; // Size: 0x40
    Params_ReceiveUpdate params{};
    params.Payload = (FARPoseUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
