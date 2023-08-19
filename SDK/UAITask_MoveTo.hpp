#pragma once
#include <cstdint>
#include "EAIOptionFlag\Type.hpp"
#include "FAIMoveRequest.hpp"
#include "FVector.hpp"
#include "UAITask.hpp"
class AAIController;
class AActor;
#pragma pack(push, 1)
class UAITask_MoveTo : public UAITask {
public:
    char pad_70[0x20];
    FAIMoveRequest MoveRequest; // 0x90
    char pad_d0[0x40];
    static UAITask_MoveTo* StaticClass();
    static UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag::Type StopOnOverlap, EAIOptionFlag::Type AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, EAIOptionFlag::Type ProjectGoalOnNavigation);
}; // Size: 0x110
#pragma pack(pop)
