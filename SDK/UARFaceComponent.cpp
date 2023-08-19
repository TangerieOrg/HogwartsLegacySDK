#include "EARFaceTransformMixing.hpp"
#include "EFaceComponentDebugMode.hpp"
#include "FARFaceUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARFaceComponent.hpp"
#include "UFunction.hpp"
UARFaceComponent* UARFaceComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARFaceComponent");
    return (UARFaceComponent*)res;
}
void UARFaceComponent::SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode"));
    struct Params_SetFaceComponentDebugMode {
        EFaceComponentDebugMode NewDebugMode; // 0x0
    }; // Size: 0x1
    Params_SetFaceComponentDebugMode params{};
    params.NewDebugMode = (EFaceComponentDebugMode)NewDebugMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARFaceComponent::ServerUpdatePayload(FARFaceUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARFaceUpdatePayload NewPayload; // 0x0
    }; // Size: 0x40
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARFaceUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARFaceComponent::ReceiveAdd(FARFaceUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARFaceUpdatePayload Payload; // 0x0
    }; // Size: 0x40
    Params_ReceiveAdd params{};
    params.Payload = (FARFaceUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARFaceComponent::ReceiveUpdate(FARFaceUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARFaceUpdatePayload Payload; // 0x0
    }; // Size: 0x40
    Params_ReceiveUpdate params{};
    params.Payload = (FARFaceUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
