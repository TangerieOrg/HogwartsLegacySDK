#pragma once
#include <cstdint>
#include "EEnemyAIState.hpp"
#include "ENPC_FollowSplineDirection.hpp"
#include "ENPC_FollowSplineEndAction.hpp"
#include "ENPC_FollowSplineScurryState.hpp"
#include "ENPC_Mobility.hpp"
#include "FEnemy_SpawmParams.hpp"
#include "FNPC_ShowUI.hpp"
#include "FVector.hpp"
class ANPC_Spline;
#pragma pack(push, 1)
struct FEnemy_SpawnFollowSpline : public FEnemy_SpawmParams {
    char pad_1[0x7];
    bool bUseLerpedSplineNormals; // 0x8
    char pad_9[0x3];
    FVector SplineLocalOffset; // 0xc
    float MinSpeed; // 0x18
    float MaxSpeed; // 0x1c
    float MoveScale; // 0x20
    float Acceleration; // 0x24
    float Deceleration; // 0x28
    float speedRampDist; // 0x2c
    float speedRampAccel; // 0x30
    ENPC_FollowSplineDirection StartDirection; // 0x34
    ENPC_Mobility Mobility; // 0x35
    char pad_36[0x2];
    float StartDist; // 0x38
    float StartSplineDelay; // 0x3c
    float StartSplineDeviation; // 0x40
    bool bWaitToStart; // 0x44
    char pad_45[0x3];
    float SplineInterval; // 0x48
    float SplineIntervalDeviation; // 0x4c
    float SplineIdleChance; // 0x50
    float IdleMinInterval; // 0x54
    ENPC_FollowSplineScurryState ScurryState; // 0x58
    char pad_59[0x3];
    float ScurryProximityRadius; // 0x5c
    float ScurryCheckInterval; // 0x60
    float ScurryCheckIntervalDeviation; // 0x64
    float ScurryChance; // 0x68
    float ScurryMinSpeed; // 0x6c
    float ScurryMaxSpeed; // 0x70
    float ScurryInterval; // 0x74
    float ScurryIntervalDeviation; // 0x78
    ENPC_FollowSplineEndAction EndAction; // 0x7c
    bool bOnDieLeaveBehindBody; // 0x7d
    bool bAttemptAOEWhenReachingEnd; // 0x7e
    char pad_7f[0x1];
    float EndTimout; // 0x80
    EEnemyAIState EndState; // 0x84
    bool bPerceptionEnabled; // 0x85
    bool bOnPerceptionEndBypassAlert; // 0x86
    bool bPerceptionEnabledOnNavMesh; // 0x87
    bool bPerceptionEnableRequireDistance; // 0x88
    char pad_89[0x3];
    float PerceptionEnableMaxDistance; // 0x8c
    bool bOverrideShowUI; // 0x90
    char pad_91[0x3];
    FNPC_ShowUI ShowUI; // 0x94
    bool bTargetable; // 0xa0
    bool bPerceivable; // 0xa1
    bool bStealthKillable; // 0xa2
    bool bCollidable; // 0xa3
    char pad_a4[0x4];
}; // Size: 0xa8
#pragma pack(pop)
