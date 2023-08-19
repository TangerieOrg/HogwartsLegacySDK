#include "AAIController.hpp"
#include "AActor.hpp"
#include "EAIOptionFlag\Type.hpp"
#include "FAIMoveRequest.hpp"
#include "FVector.hpp"
#include "UAITask.hpp"
#include "UAITask_MoveTo.hpp"
#include "UFunction.hpp"
UAITask_MoveTo* UAITask_MoveTo::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AITask_MoveTo");
    return (UAITask_MoveTo*)res;
}
UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag::Type StopOnOverlap, EAIOptionFlag::Type AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag::Type ProjectGoalOnNavigation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.AITask_MoveTo.AIMoveTo"));
    struct Params_AIMoveTo {
        AAIController* Controller; // 0x0
        FVector GoalLocation; // 0x8
        char pad_14[0x4];
        AActor* GoalActor; // 0x18
        float AcceptanceRadius; // 0x20
        EAIOptionFlag::Type StopOnOverlap; // 0x24
        EAIOptionFlag::Type AcceptPartialPath; // 0x25
        bool bUsePathfinding; // 0x26
        bool bLockAILogic; // 0x27
        bool bUseContinuosGoalTracking; // 0x28
        EAIOptionFlag::Type ProjectGoalOnNavigation; // 0x29
        char pad_2a[0x6];
        UAITask_MoveTo* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_AIMoveTo params{};
    params.Controller = (AAIController*)Controller;
    params.GoalLocation = (FVector)GoalLocation;
    params.GoalActor = (AActor*)GoalActor;
    params.AcceptanceRadius = (float)AcceptanceRadius;
    params.StopOnOverlap = (EAIOptionFlag::Type)StopOnOverlap;
    params.AcceptPartialPath = (EAIOptionFlag::Type)AcceptPartialPath;
    params.bUsePathfinding = (bool)bUsePathfinding;
    params.bLockAILogic = (bool)bLockAILogic;
    params.bUseContinuosGoalTracking = (bool)bUseContinuosGoalTracking;
    params.ProjectGoalOnNavigation = (EAIOptionFlag::Type)ProjectGoalOnNavigation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAITask_MoveTo*)params.ReturnValue;
}
