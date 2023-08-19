#include "FAREnvironmentProbeUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UAREnvironmentProbeComponent.hpp"
#include "UFunction.hpp"
UAREnvironmentProbeComponent* UAREnvironmentProbeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.AREnvironmentProbeComponent");
    return (UAREnvironmentProbeComponent*)res;
}
void UAREnvironmentProbeComponent::ServerUpdatePayload(FAREnvironmentProbeUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FAREnvironmentProbeUpdatePayload NewPayload; // 0x0
    }; // Size: 0x30
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FAREnvironmentProbeUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UAREnvironmentProbeComponent::ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FAREnvironmentProbeUpdatePayload Payload; // 0x0
    }; // Size: 0x30
    Params_ReceiveUpdate params{};
    params.Payload = (FAREnvironmentProbeUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UAREnvironmentProbeComponent::ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FAREnvironmentProbeUpdatePayload Payload; // 0x0
    }; // Size: 0x30
    Params_ReceiveAdd params{};
    params.Payload = (FAREnvironmentProbeUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
