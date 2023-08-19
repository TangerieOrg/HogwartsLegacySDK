#include "AActor.hpp"
#include "ACooldownPickup.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UNiagaraComponent.hpp"
#include "UPrimitiveComponent.hpp"
ACooldownPickup* ACooldownPickup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CooldownPickup");
    return (ACooldownPickup*)res;
}
void ACooldownPickup::OnPickedUp(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CooldownPickup.OnPickedUp"));
    struct Params_OnPickedUp {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_OnPickedUp params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void ACooldownPickup::UnpauseAndShow() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CooldownPickup.UnpauseAndShow"));
    struct Params_UnpauseAndShow {
    }; // Size: 0x0
    Params_UnpauseAndShow params{};
    ProcessEvent(func, &params);
}
float ACooldownPickup::GetDisablePickupTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CooldownPickup.GetDisablePickupTime"));
    struct Params_GetDisablePickupTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetDisablePickupTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void ACooldownPickup::PauseAndHide() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CooldownPickup.PauseAndHide"));
    struct Params_PauseAndHide {
    }; // Size: 0x0
    Params_PauseAndHide params{};
    ProcessEvent(func, &params);
}
void ACooldownPickup::OnResetRecycle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CooldownPickup.OnResetRecycle"));
    struct Params_OnResetRecycle {
    }; // Size: 0x0
    Params_OnResetRecycle params{};
    ProcessEvent(func, &params);
}
bool ACooldownPickup::CanPickup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CooldownPickup.CanPickup"));
    struct Params_CanPickup {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPickup params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
