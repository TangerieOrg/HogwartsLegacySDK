#include "FARPointUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARPointComponent.hpp"
#include "UFunction.hpp"
UARPointComponent* UARPointComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARPointComponent");
    return (UARPointComponent*)res;
}
void UARPointComponent::ServerUpdatePayload(FARPointUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARPointUpdatePayload NewPayload; // 0x0
    }; // Size: 0x1
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARPointUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARPointComponent::ReceiveUpdate(FARPointUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARPointUpdatePayload Payload; // 0x0
    }; // Size: 0x1
    Params_ReceiveUpdate params{};
    params.Payload = (FARPointUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARPointComponent::ReceiveAdd(FARPointUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARPointUpdatePayload Payload; // 0x0
    }; // Size: 0x1
    Params_ReceiveAdd params{};
    params.Payload = (FARPointUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
