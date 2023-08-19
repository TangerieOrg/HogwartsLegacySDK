#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorRotationLagSpringAttached : public UCameraStackBehaviorBlend {
public:
    float YawAmount; // 0x1b8
    float PitchAmount; // 0x1bc
    float RollAmount; // 0x1c0
    float MaxYawSpeed; // 0x1c4
    float MaxPitchSpeed; // 0x1c8
    float MaxRollSpeed; // 0x1cc
    float DamperHalflife; // 0x1d0
    float SpringHalflife; // 0x1d4
    char pad_1d8[0x68];
    static UCameraStackBehaviorRotationLagSpringAttached* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
