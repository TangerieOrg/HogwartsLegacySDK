#include "EQRCodeComponentDebugMode.hpp"
#include "FARQRCodeUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARQRCodeComponent.hpp"
#include "UFunction.hpp"
UARQRCodeComponent* UARQRCodeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARQRCodeComponent");
    return (UARQRCodeComponent*)res;
}
void UARQRCodeComponent::SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode"));
    struct Params_SetQRCodeComponentDebugMode {
        EQRCodeComponentDebugMode NewDebugMode; // 0x0
    }; // Size: 0x1
    Params_SetQRCodeComponentDebugMode params{};
    params.NewDebugMode = (EQRCodeComponentDebugMode)NewDebugMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARQRCodeComponent::ReceiveUpdate(FARQRCodeUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARQRCodeUpdatePayload Payload; // 0x0
    }; // Size: 0x70
    Params_ReceiveUpdate params{};
    params.Payload = (FARQRCodeUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARQRCodeComponent::ServerUpdatePayload(FARQRCodeUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARQRCodeUpdatePayload NewPayload; // 0x0
    }; // Size: 0x70
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARQRCodeUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARQRCodeComponent::ReceiveAdd(FARQRCodeUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARQRCodeUpdatePayload Payload; // 0x0
    }; // Size: 0x70
    Params_ReceiveAdd params{};
    params.Payload = (FARQRCodeUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
