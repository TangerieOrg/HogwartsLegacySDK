#pragma once
#include <cstdint>
#include "EMovementMode.hpp"
#include "ENpcMoveDirectionType.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UAblNpcMoveInDirectionTask : public UAblAbilityTask {
public:
    ENpcMoveDirectionType DirectionType; // 0x70
    char pad_71[0x3];
    FVector Direction; // 0x74
    float MinSpeed; // 0x80
    float MaxSpeed; // 0x84
    float RandAngleCone; // 0x88
    EMovementMode MovementMode; // 0x8c
    bool bModifyGravityAtTaskStart; // 0x8d
    char pad_8e[0x2];
    float GravityScaleAtTaskStart; // 0x90
    bool bRestoreGravityScaleAtTaskEnd; // 0x94
    bool bAddMomentumAtTaskEnd; // 0x95
    bool bIgnoreZ; // 0x96
    bool bUseNpcMaxHeight; // 0x97
    bool bOverrideMaxHeight; // 0x98
    char pad_99[0x3];
    float MaxHeightOverride; // 0x9c
    bool bUseCurveSpeedManipulation; // 0xa0
    char pad_a1[0x7];
    TArray<UCurveFloat*> Curves; // 0xa8
    bool bLoopCurve; // 0xb8
    bool bRandStartTimeOnCurve; // 0xb9
    bool bUseCurveValueAsMultiplier; // 0xba
    bool bFitCurveToTaskDuration; // 0xbb
    char pad_bc[0x4];
    static UAblNpcMoveInDirectionTask* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
