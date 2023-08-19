#pragma once
#include <cstdint>
#include "EAblAbilityEnemyMoveVelocitySource.hpp"
#include "EAblAbilityTargetType.hpp"
#include "FVector.hpp"
#include "UAblAbilityTask.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UAblEnemyMoveTask : public UAblAbilityTask {
public:
    EAblAbilityTargetType m_Target; // 0x70
    EAblAbilityEnemyMoveVelocitySource VelocitySource; // 0x71
    char pad_72[0x2];
    FVector CustomVelocity; // 0x74
    float CustomSpeed; // 0x80
    float ZDirectionOffset; // 0x84
    bool bRestoreMovementMode; // 0x88
    bool bApplyGravity; // 0x89
    char pad_8a[0x2];
    float GravityMultiplier; // 0x8c
    float MaxDownwardVelocityDueToGravity; // 0x90
    bool bOverrideJumpArc; // 0x94
    char pad_95[0x3];
    float OverrideJumpArc; // 0x98
    bool bForceApplyingGravityForJumps; // 0x9c
    bool bDebugDrawJump; // 0x9d
    char pad_9e[0x2];
    float SlideSpeed; // 0xa0
    float SlideTargetTolerance; // 0xa4
    float ZeroVelocityTolerance; // 0xa8
    bool bApplyVelocityTowardsInstigator; // 0xac
    char pad_ad[0x3];
    float NoMovementOccuredTolerance; // 0xb0
    float AcceptanceDistance; // 0xb4
    bool bDiminishVelocity; // 0xb8
    char pad_b9[0x3];
    float TimeToStop; // 0xbc
    float DegreeOfEaseOutCurve; // 0xc0
    bool bCanVaryTowardsInstigator; // 0xc4
    char pad_c5[0x3];
    UCurveFloat* VaryingCurve; // 0xc8
    float MinimumDistance; // 0xd0
    bool bDiminishVelocityDueToGravity; // 0xd4
    char pad_d5[0x3];
    float OnGroundDetectionDistance; // 0xd8
    bool bIgnoreAllFloorHits; // 0xdc
    bool bSlideAcrossGroundInitially; // 0xdd
    bool bSlideAcrossGroundAlways; // 0xde
    bool bLockZPosition; // 0xdf
    bool bCutOffMovement; // 0xe0
    char pad_e1[0x3];
    float CutoffDistance; // 0xe4
    static UAblEnemyMoveTask* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
