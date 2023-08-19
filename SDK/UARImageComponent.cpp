#include "EImageComponentDebugMode.hpp"
#include "FARImageUpdatePayload.hpp"
#include "UARComponent.hpp"
#include "UARImageComponent.hpp"
#include "UFunction.hpp"
UARImageComponent* UARImageComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARImageComponent");
    return (UARImageComponent*)res;
}
void UARImageComponent::SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode"));
    struct Params_SetImageComponentDebugMode {
        EImageComponentDebugMode NewDebugMode; // 0x0
    }; // Size: 0x1
    Params_SetImageComponentDebugMode params{};
    params.NewDebugMode = (EImageComponentDebugMode)NewDebugMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UARImageComponent::ServerUpdatePayload(FARImageUpdatePayload& NewPayload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload"));
    struct Params_ServerUpdatePayload {
        FARImageUpdatePayload NewPayload; // 0x0
    }; // Size: 0x60
    Params_ServerUpdatePayload params{};
    params.NewPayload = (FARImageUpdatePayload)NewPayload;
    ProcessEvent(func, &params);
    NewPayload = params.NewPayload;
}
void UARImageComponent::ReceiveAdd(FARImageUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd"));
    struct Params_ReceiveAdd {
        FARImageUpdatePayload Payload; // 0x0
    }; // Size: 0x60
    Params_ReceiveAdd params{};
    params.Payload = (FARImageUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
void UARImageComponent::ReceiveUpdate(FARImageUpdatePayload& Payload) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate"));
    struct Params_ReceiveUpdate {
        FARImageUpdatePayload Payload; // 0x0
    }; // Size: 0x60
    Params_ReceiveUpdate params{};
    params.Payload = (FARImageUpdatePayload)Payload;
    ProcessEvent(func, &params);
    Payload = params.Payload;
}
