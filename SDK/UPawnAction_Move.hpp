#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UPawnAction.hpp"
class AActor;
class UClass;
#pragma pack(push, 1)
class UPawnAction_Move : public UPawnAction {
public:
    AActor* GoalActor; // 0x90
    FVector GoalLocation; // 0x98
    float AcceptableRadius; // 0xa4
    UClass* FilterClass; // 0xa8
    uint8_t bAllowStrafe : 1; // 0xb0
    uint8_t bFinishOnOverlap : 1; // 0xb0
    uint8_t bUsePathfinding : 1; // 0xb0
    uint8_t bAllowPartialPath : 1; // 0xb0
    uint8_t bProjectGoalToNavigation : 1; // 0xb0
    uint8_t bUpdatePathToGoal : 1; // 0xb0
    uint8_t bAbortChildActionOnPathChange : 1; // 0xb0
    uint8_t pad_bitfield_b0_7 : 1;
    char pad_b1[0x2f];
    static UPawnAction_Move* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
