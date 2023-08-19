#include "EGeoAnchorComponentDebugMode.hpp"
#include "FARGeoAnchorUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARGeoAnchorComponent.hpp"
#include "UFunction.hpp"
UARGeoAnchorComponent* UARGeoAnchorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARGeoAnchorComponent");
    return (UARGeoAnchorComponent*)res;
}
void UARGeoAnchorComponent::ServerUpdatePayload(FARGeoAnchorUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARGeoAnchorUpdatePayload NewPayload; // 0x0
    }; // Size: 0x70
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARGeoAnchorUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode"));
    struct Params_SetGeoAnchorComponentDebugMode {
        EGeoAnchorComponentDebugMode NewDebugMode; // 0x0
    }; // Size: 0x1
    Params_SetGeoAnchorComponentDebugMode params{};
    params.NewDebugMode = (EGeoAnchorComponentDebugMode)NewDebugMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARGeoAnchorComponent::ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARGeoAnchorUpdatePayload Payload; // 0x0
    }; // Size: 0x70
    Params_ReceiveUpdate params{};
    params.Payload = (FARGeoAnchorUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARGeoAnchorComponent::ReceiveAdd(FARGeoAnchorUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARGeoAnchorUpdatePayload Payload; // 0x0
    }; // Size: 0x70
    Params_ReceiveAdd params{};
    params.Payload = (FARGeoAnchorUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
