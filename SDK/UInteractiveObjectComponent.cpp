#include "EInteractiveAction.hpp"
#include "EInteractiveState.hpp"
#include "FInteractiveObjectLinkData.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UInteractiveObjectComponent.hpp"
#include "UObject.hpp"
UInteractiveObjectComponent* UInteractiveObjectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InteractiveObjectComponent");
    return (UInteractiveObjectComponent*)res;
}
void UInteractiveObjectComponent::SetState(EInteractiveState State) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractiveObjectComponent.SetState"));
    struct Params_SetState {
        EInteractiveState State; // 0x0
    }; // Size: 0x1
    Params_SetState params{};
    params.State = (EInteractiveState)State;
    ProcessEvent(func, &params);
}
void UInteractiveObjectComponent::SetEnabled(bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractiveObjectComponent.SetEnabled"));
    struct Params_SetEnabled {
        bool bEnable; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void UInteractiveObjectComponent::HandleInteract(UObject* i_caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractiveObjectComponent.HandleInteract"));
    struct Params_HandleInteract {
        UObject* i_caller; // 0x0
    }; // Size: 0x8
    Params_HandleInteract params{};
    params.i_caller = (UObject*)i_caller;
    ProcessEvent(func, &params);
}
EInteractiveState UInteractiveObjectComponent::GetState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractiveObjectComponent.GetState"));
    struct Params_GetState {
        EInteractiveState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetState params{};
    ProcessEvent(func, &params);
    return (EInteractiveState)params.ReturnValue;
}
void UInteractiveObjectComponent::CheckForStateChange(EInteractiveAction Action) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractiveObjectComponent.CheckForStateChange"));
    struct Params_CheckForStateChange {
        EInteractiveAction Action; // 0x0
    }; // Size: 0x1
    Params_CheckForStateChange params{};
    params.Action = (EInteractiveAction)Action;
    ProcessEvent(func, &params);
}
bool UInteractiveObjectComponent::GetEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InteractiveObjectComponent.GetEnabled"));
    struct Params_GetEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetEnabled params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
