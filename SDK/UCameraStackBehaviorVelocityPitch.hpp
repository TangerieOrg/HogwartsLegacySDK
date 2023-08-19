#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UCameraStackBehaviorVelocityPitch : public UCameraStackBehaviorBlend {
public:
    float MaxVerticalSpeed; // 0x1b8
    float MaxPitchSpeed; // 0x1bc
    UCurveFloat* PitchToPitchSpeedPositive; // 0x1c0
    UCurveFloat* PitchToPitchSpeedNegative; // 0x1c8
    char pad_1d0[0x18];
    static UCameraStackBehaviorVelocityPitch* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
