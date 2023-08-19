#pragma once
#include <cstdint>
#include "ENPC_PhysicsBallisticToTargetTaskMode.hpp"
#include "ENPC_PhysicsBallisticType.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNPC_PhysicsBallisticToTargetTask : public UAblAbilityTask {
public:
    ENPC_PhysicsBallisticType Type; // 0x70
    bool bUseTarget; // 0x71
    ENPC_PhysicsBallisticToTargetTaskMode Mode; // 0x72
    ENPC_PhysicsBallisticToTargetTaskMode EndMode; // 0x73
    bool bBallisticFromAttackData; // 0x74
    char pad_75[0x3];
    float OverrideGravity; // 0x78
    bool bTrackTarget; // 0x7c
    char pad_7d[0x3];
    float ArcParam; // 0x80
    float TimeMult; // 0x84
    FVector TargetOffset; // 0x88
    float TargetVelocityPredictionTime; // 0x94
    float MaxDistance; // 0x98
    bool bIgnoreCollisionUntilApex; // 0x9c
    bool bIgnoreNonStatic; // 0x9d
    bool bCollateralDamage; // 0x9e
    char pad_9f[0x1];
    float fRandomAngleDeviationMin; // 0xa0
    float fRandomAngleDeviationMax; // 0xa4
    float fRandomDistanceDeviationMin; // 0xa8
    float fRandomDistanceDeviationMax; // 0xac
    FName TargetPointName; // 0xb0
    float PhysicsOnGroundMinTime; // 0xb8
    float PhysicsOnGroundTimeout; // 0xbc
    float PhysicsMinTime; // 0xc0
    float PhysicsTimeout; // 0xc4
    float MovementStopTolerance; // 0xc8
    bool bDisableCollisionResolution; // 0xcc
    char pad_cd[0x3];
    static UAblNPC_PhysicsBallisticToTargetTask* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
