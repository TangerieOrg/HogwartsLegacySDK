#include "APawn.hpp"
#include "EPawnActionResult\Type.hpp"
#include "UFunction.hpp"
#include "UPawnAction.hpp"
#include "UPawnAction_BlueprintBase.hpp"
void UPawnAction_BlueprintBase::ActionPause(APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause"));
    struct Params_ActionPause {
        APawn* ControlledPawn; // 0x0
    }; // Size: 0x8
    Params_ActionPause params{};
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
UPawnAction_BlueprintBase* UPawnAction_BlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PawnAction_BlueprintBase");
    return (UPawnAction_BlueprintBase*)res;
}
void UPawnAction_BlueprintBase::ActionFinished(APawn* ControlledPawn, EPawnActionResult::Type WithResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished"));
    struct Params_ActionFinished {
        APawn* ControlledPawn; // 0x0
        EPawnActionResult::Type WithResult; // 0x8
    }; // Size: 0x9
    Params_ActionFinished params{};
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.WithResult = (EPawnActionResult::Type)WithResult;
    ProcessEvent(func, &params);
}
void UPawnAction_BlueprintBase::ActionTick(APawn* ControlledPawn, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick"));
    struct Params_ActionTick {
        APawn* ControlledPawn; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ActionTick params{};
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UPawnAction_BlueprintBase::ActionStart(APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart"));
    struct Params_ActionStart {
        APawn* ControlledPawn; // 0x0
    }; // Size: 0x8
    Params_ActionStart params{};
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UPawnAction_BlueprintBase::ActionResume(APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume"));
    struct Params_ActionResume {
        APawn* ControlledPawn; // 0x0
    }; // Size: 0x8
    Params_ActionResume params{};
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
