#include "FARObjectUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARObjectComponent.hpp"
#include "UFunction.hpp"
UARObjectComponent* UARObjectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARObjectComponent");
    return (UARObjectComponent*)res;
}
void UARObjectComponent::ServerUpdatePayload(FARObjectUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARObjectUpdatePayload NewPayload; // 0x0
    }; // Size: 0x30
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARObjectUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARObjectComponent::ReceiveUpdate(FARObjectUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARObjectUpdatePayload Payload; // 0x0
    }; // Size: 0x30
    Params_ReceiveUpdate params{};
    params.Payload = (FARObjectUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARObjectComponent::ReceiveAdd(FARObjectUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARObjectUpdatePayload Payload; // 0x0
    }; // Size: 0x30
    Params_ReceiveAdd params{};
    params.Payload = (FARObjectUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
