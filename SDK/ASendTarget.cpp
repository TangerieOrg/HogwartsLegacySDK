#include "AActor.hpp"
#include "ASendTarget.hpp"
#include "ATargetPoint.hpp"
#include "FHitResult.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
void ASendTarget::SetSendTargetPriority(uint8_t InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTarget.SetSendTargetPriority"));
    struct Params_SetSendTargetPriority {
        uint8_t InPriority; // 0x0
    }; // Size: 0x1
    Params_SetSendTargetPriority params{};
    params.InPriority = (uint8_t)InPriority;
    ProcessEvent(func, &params);
}
ASendTarget* ASendTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SendTarget");
    return (ASendTarget*)res;
}
void ASendTarget::SetEnabled(bool bInEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTarget.SetEnabled"));
    struct Params_SetEnabled {
        bool bInEnabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bInEnabled = (bool)bInEnabled;
    ProcessEvent(func, &params);
}
bool ASendTarget::IsEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTarget.IsEnabled"));
    struct Params_IsEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
uint8_t ASendTarget::GetSendTargetPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTarget.GetSendTargetPriority"));
    struct Params_GetSendTargetPriority {
        uint8_t ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSendTargetPriority params{};
    ProcessEvent(func, &params);
    return (uint8_t)params.ReturnValue;
}
void ASendTarget::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SendTarget.BeginOverlap"));
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
