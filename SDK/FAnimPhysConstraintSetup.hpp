#pragma once
#include <cstdint>
#include "AnimPhysAngularConstraintType.hpp"
#include "AnimPhysLinearConstraintType.hpp"
#include "AnimPhysTwistAxis.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimPhysConstraintSetup {
    AnimPhysLinearConstraintType LinearXLimitType; // 0x0
    AnimPhysLinearConstraintType LinearYLimitType; // 0x1
    AnimPhysLinearConstraintType LinearZLimitType; // 0x2
    char pad_3[0x1];
    FVector LinearAxesMin; // 0x4
    FVector LinearAxesMax; // 0x10
    AnimPhysAngularConstraintType AngularConstraintType; // 0x1c
    AnimPhysTwistAxis TwistAxis; // 0x1d
    AnimPhysTwistAxis AngularTargetAxis; // 0x1e
    char pad_1f[0x1];
    float ConeAngle; // 0x20
    FVector AngularLimitsMin; // 0x24
    FVector AngularLimitsMax; // 0x30
    FVector AngularTarget; // 0x3c
}; // Size: 0x48
#pragma pack(pop)
