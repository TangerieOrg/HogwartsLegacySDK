#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorSetRotationLimits : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x8];
    bool bEnablePitchLimits; // 0x1c0
    char pad_1c1[0x3];
    float MinPitch; // 0x1c4
    float MaxPitch; // 0x1c8
    bool bEnableYawLimits; // 0x1cc
    bool bLimitYawRelativeToTarget; // 0x1cd
    char pad_1ce[0x2];
    float minYaw; // 0x1d0
    float MaxYaw; // 0x1d4
    bool bEnableRollLimits; // 0x1d8
    char pad_1d9[0x3];
    float minRoll; // 0x1dc
    float MaxRoll; // 0x1e0
    char pad_1e4[0x4];
    static UCameraStackBehaviorSetRotationLimits* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
