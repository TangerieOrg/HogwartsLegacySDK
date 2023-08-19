#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorRotateTowardsSecondaryTarget : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8
    UCurveFloat* DistanceToYaw; // 0x1c0
    FVector2D YawAngleRange; // 0x1c8
    bool bSymmetricalYaw; // 0x1d0
    bool bCommitToDirection; // 0x1d1
    bool bOtherSide; // 0x1d2
    char pad_1d3[0x1];
    float RotationSpeed; // 0x1d4
    UCurveFloat* AngleToRotationSpeed; // 0x1d8
    float AngleBias; // 0x1e0
    float AccumulatedRotationAmount; // 0x1e4
    char pad_1e8[0x28];
    static UCameraStackBehaviorRotateTowardsSecondaryTarget* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
