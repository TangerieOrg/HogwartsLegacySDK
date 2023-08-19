#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorSetRotationLimitsRelativeToTarget : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x8];
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1c0
    bool bEnablePitchLimits; // 0x1c8
    char pad_1c9[0x3];
    float MinPitch; // 0x1cc
    float MaxPitch; // 0x1d0
    bool bEnableYawLimits; // 0x1d4
    char pad_1d5[0x3];
    float minYaw; // 0x1d8
    float MaxYaw; // 0x1dc
    char pad_1e0[0x8];
    static UCameraStackBehaviorSetRotationLimitsRelativeToTarget* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
