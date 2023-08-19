#include "EPlaneComponentDebugMode.hpp"
#include "FARPlaneUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARPlaneComponent.hpp"
#include "UFunction.hpp"
UARPlaneComponent* UARPlaneComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARPlaneComponent");
    return (UARPlaneComponent*)res;
}
void UARPlaneComponent::ServerUpdatePayload(FARPlaneUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARPlaneUpdatePayload NewPayload; // 0x0
    }; // Size: 0x80
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARPlaneUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode"));
    struct Params_SetPlaneComponentDebugMode {
        EPlaneComponentDebugMode NewDebugMode; // 0x0
    }; // Size: 0x1
    Params_SetPlaneComponentDebugMode params{};
    params.NewDebugMode = (EPlaneComponentDebugMode)NewDebugMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARPlaneComponent::SetObjectClassificationDebugColors() {}
void UARPlaneComponent::ReceiveUpdate(FARPlaneUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARPlaneUpdatePayload Payload; // 0x0
    }; // Size: 0x80
    Params_ReceiveUpdate params{};
    params.Payload = (FARPlaneUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARPlaneComponent::ReceiveAdd(FARPlaneUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARPlaneUpdatePayload Payload; // 0x0
    }; // Size: 0x80
    Params_ReceiveAdd params{};
    params.Payload = (FARPlaneUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARPlaneComponent::GetObjectClassificationDebugColors() {}
