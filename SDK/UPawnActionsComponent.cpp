#include "APawn.hpp"
#include "EAIRequestPriority\Type.hpp"
#include "EPawnActionAbortState\Type.hpp"
#include "FPawnActionEvent.hpp"
#include "FPawnActionStack.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPawnAction.hpp"
#include "UPawnActionsComponent.hpp"
UPawnActionsComponent* UPawnActionsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PawnActionsComponent");
    return (UPawnActionsComponent*)res;
}
bool UPawnActionsComponent::K2_PushAction(UPawnAction* NewAction, EAIRequestPriority::Type Priority, UObject* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnActionsComponent.K2_PushAction"));
    struct Params_K2_PushAction {
        UPawnAction* NewAction; // 0x0
        EAIRequestPriority::Type Priority; // 0x8
        char pad_9[0x7];
        UObject* Instigator; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_K2_PushAction params{};
    params.NewAction = (UPawnAction*)NewAction;
    params.Priority = (EAIRequestPriority::Type)Priority;
    params.Instigator = (UObject*)Instigator;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPawnActionsComponent::K2_PerformAction(APawn* Pawn, UPawnAction* Action, EAIRequestPriority::Type Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnActionsComponent.K2_PerformAction"));
    struct Params_K2_PerformAction {
        APawn* Pawn; // 0x0
        UPawnAction* Action; // 0x8
        EAIRequestPriority::Type Priority; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_K2_PerformAction params{};
    params.Pawn = (APawn*)Pawn;
    params.Action = (UPawnAction*)Action;
    params.Priority = (EAIRequestPriority::Type)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EPawnActionAbortState::Type UPawnActionsComponent::K2_ForceAbortAction(UPawnAction* ActionToAbort) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction"));
    struct Params_K2_ForceAbortAction {
        UPawnAction* ActionToAbort; // 0x0
        EPawnActionAbortState::Type ReturnValue; // 0x8
    }; // Size: 0x9
    Params_K2_ForceAbortAction params{};
    params.ActionToAbort = (UPawnAction*)ActionToAbort;
    ProcessEvent(func, &params);
    return (EPawnActionAbortState::Type)params.ReturnValue;
}
EPawnActionAbortState::Type UPawnActionsComponent::K2_AbortAction(UPawnAction* ActionToAbort) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnActionsComponent.K2_AbortAction"));
    struct Params_K2_AbortAction {
        UPawnAction* ActionToAbort; // 0x0
        EPawnActionAbortState::Type ReturnValue; // 0x8
    }; // Size: 0x9
    Params_K2_AbortAction params{};
    params.ActionToAbort = (UPawnAction*)ActionToAbort;
    ProcessEvent(func, &params);
    return (EPawnActionAbortState::Type)params.ReturnValue;
}
