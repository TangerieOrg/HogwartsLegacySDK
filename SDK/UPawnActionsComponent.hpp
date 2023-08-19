#pragma once
#include <cstdint>
#include "EAIRequestPriority\Type.hpp"
#include "EPawnActionAbortState\Type.hpp"
#include "FPawnActionEvent.hpp"
#include "FPawnActionStack.hpp"
#include "UActorComponent.hpp"
class APawn;
class UPawnAction;
class UObject;
#pragma pack(push, 1)
class UPawnActionsComponent : public UActorComponent {
public:
    APawn* ControlledPawn; // 0xc8
    TArray<FPawnActionStack> ActionStacks; // 0xd0
    TArray<FPawnActionEvent> ActionEvents; // 0xe0
    UPawnAction* CurrentAction; // 0xf0
    char pad_f8[0x8];
    static UPawnActionsComponent* StaticClass();
    bool K2_PushAction(UPawnAction* NewAction, EAIRequestPriority::Type Priority, UObject* Instigator);
    static bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, EAIRequestPriority::Type Priority);
    EPawnActionAbortState::Type K2_ForceAbortAction(UPawnAction* ActionToAbort);
    EPawnActionAbortState::Type K2_AbortAction(UPawnAction* ActionToAbort);
}; // Size: 0x100
#pragma pack(pop)
