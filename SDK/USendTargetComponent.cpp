#include "AActor.hpp"
#include "FHitResult.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USendTargetComponent.hpp"
#include "USphereComponent.hpp"
USendTargetComponent* USendTargetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SendTargetComponent");
    return (USendTargetComponent*)res;
}
void USendTargetComponent::SetEnabled(bool bInEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTargetComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool bInEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    ProcessEvent(func, &params);
}
void USendTargetComponent::SetSendTargetPriority(uint8_t InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTargetComponent.SetSendTargetPriority"));
    struct Params_SetSendTargetPriority {
        uint8_t InPriority; // 0x0
    }; // Size: 0x1
    Params_SetSendTargetPriority params{};
    params.InPriority = (uint8_t)InPriority;
    ProcessEvent(func, &params);
}
bool USendTargetComponent::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTargetComponent.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
uint8_t USendTargetComponent::GetSendTargetPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTargetComponent.GetSendTargetPriority"));
    struct Params_GetSendTargetPriority {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSendTargetPriority params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void USendTargetComponent::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTargetComponent.BeginOverlap"));
    struct Params_BeginOverlap {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_BeginOverlap params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
