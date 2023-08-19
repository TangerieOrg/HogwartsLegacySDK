#pragma once
#include <cstdint>
#include "EAblNpcPopupDirection.hpp"
#include "EMovementMode.hpp"
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UAblNpcPopupTask : public UAblAbilityTask {
public:
    EAblNpcPopupDirection PopupDirection; // 0x70
    bool bUseMagnitudeAndAngle; // 0x71
    char pad_72[0x2];
    float Magnitude; // 0x74
    float MagnitudeVariance; // 0x78
    float Angle; // 0x7c
    float AngleVariance; // 0x80
    float MagnitudeHorz; // 0x84
    float MagnitudeVert; // 0x88
    float HorizontalDamping; // 0x8c
    float CollisionVsFloorInitialDamping; // 0x90
    float CollisionVsFloorDamping; // 0x94
    bool bUseNpcMaxHeight; // 0x98
    bool bOverrideMaxHeight; // 0x99
    char pad_9a[0x2];
    float MaxHeightOverride; // 0x9c
    bool bModifyGravityAtTaskStart; // 0xa0
    char pad_a1[0x3];
    float GravityScaleAtTaskStart; // 0xa4
    bool bModifyGravityAtMaxHeight; // 0xa8
    char pad_a9[0x3];
    float GravityScaleAtMaxHeight; // 0xac
    bool bModifyGravityAtApex; // 0xb0
    char pad_b1[0x3];
    float GravityScaleAtApex; // 0xb4
    bool bRestoreGravityScaleAtTaskEnd; // 0xb8
    bool bStompVelocityAtTaskStart; // 0xb9
    bool bStompVelocityAtTaskEnd; // 0xba
    bool bIgnoreInAirCollisions; // 0xbb
    EMovementMode MovementMode; // 0xbc
    char pad_bd[0x3];
    static UAblNpcPopupTask* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
