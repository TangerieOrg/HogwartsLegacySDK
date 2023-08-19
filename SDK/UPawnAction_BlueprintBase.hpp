#pragma once
#include <cstdint>
#include "EPawnActionResult\Type.hpp"
#include "UPawnAction.hpp"
class APawn;
#pragma pack(push, 1)
class UPawnAction_BlueprintBase : public UPawnAction {
public:
    static UPawnAction_BlueprintBase* StaticClass();
    void ActionTick(APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(APawn* ControlledPawn);
    void ActionResume(APawn* ControlledPawn);
    void ActionPause(APawn* ControlledPawn);
    void ActionFinished(APawn* ControlledPawn, EPawnActionResult::Type WithResult);
}; // Size: 0x90
#pragma pack(pop)
