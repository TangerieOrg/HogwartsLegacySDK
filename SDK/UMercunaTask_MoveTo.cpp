#include "AAIController.hpp"
#include "AActor.hpp"
#include "EMercunaMoveResult\Type.hpp"
#include "FAIRequestID.hpp"
#include "FVector.hpp"
#include "UAITask.hpp"
#include "UFunction.hpp"
#include "UMercunaTask_MoveTo.hpp"
UMercunaTask_MoveTo* UMercunaTask_MoveTo::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.MercunaTask_MoveTo");
    return (UMercunaTask_MoveTo*)res;
}
UMercunaTask_MoveTo* UMercunaTask_MoveTo::MercunaMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaTask_MoveTo.MercunaMoveTo"));
    struct Params_MercunaMoveTo {
        AAIController* Controller; // 0x0
        FVector GoalLocation; // 0x8
        char pad_14[0x4];
        AActor* GoalActor; // 0x18
        float EndDistance; // 0x20
        bool AcceptPartialPath; // 0x24
        bool bLockAILogic; // 0x25
        char pad_26[0x2];
        UMercunaTask_MoveTo* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_MercunaMoveTo params{};
    params.Controller = (AAIController*)Controller;
    params.GoalLocation = (FVector)GoalLocation;
    params.GoalActor = (AActor*)GoalActor;
    params.EndDistance = (float)EndDistance;
    params.AcceptPartialPath = (bool)AcceptPartialPath;
    params.bLockAILogic = (bool)bLockAILogic;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMercunaTask_MoveTo*)params.ReturnValue;
}
void UMercunaTask_MoveTo::OnMoveComplete(FAIRequestID RequestID, EMercunaMoveResult::Type Result) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Mercuna.MercunaTask_MoveTo.OnMoveComplete"));
    struct Params_OnMoveComplete {
        FAIRequestID RequestID; // 0x0
        EMercunaMoveResult::Type Result; // 0x4
    }; // Size: 0x5
    Params_OnMoveComplete params{};
    params.RequestID = (FAIRequestID)RequestID;
    params.Result = (EMercunaMoveResult::Type)Result;
    ProcessEvent(func, &params);
}
