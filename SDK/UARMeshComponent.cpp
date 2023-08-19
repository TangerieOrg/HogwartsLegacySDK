#include "FARMeshUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARMeshComponent.hpp"
#include "UFunction.hpp"
UARMeshComponent* UARMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARMeshComponent");
    return (UARMeshComponent*)res;
}
void UARMeshComponent::ServerUpdatePayload(FARMeshUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARMeshUpdatePayload NewPayload; // 0x0
    }; // Size: 0x60
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARMeshUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARMeshComponent::ReceiveAdd(FARMeshUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARMeshUpdatePayload Payload; // 0x0
    }; // Size: 0x60
    Params_ReceiveAdd params{};
    params.Payload = (FARMeshUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARMeshComponent::ReceiveUpdate(FARMeshUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARMeshUpdatePayload Payload; // 0x0
    }; // Size: 0x60
    Params_ReceiveUpdate params{};
    params.Payload = (FARMeshUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
