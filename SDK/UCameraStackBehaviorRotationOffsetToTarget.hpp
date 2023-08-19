#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorRotationOffsetToTarget : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1b8
    UCurveFloat* DistanceToYaw; // 0x1c0
    FVector2D YawAngleRange; // 0x1c8
    bool bSymmetricalYaw; // 0x1d0
    bool bCommitToDirection; // 0x1d1
    bool bOtherSide; // 0x1d2
    char pad_1d3[0x1];
    float AngleBias; // 0x1d4
    char pad_1d8[0x18];
    static UCameraStackBehaviorRotationOffsetToTarget* StaticClass();
}; // Size: 0x1f0
#pragma pack(pop)
