#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorRotationLag : public UCameraStackBehaviorBlend {
public:
    float LagSpeed; // 0x1b8
    bool bLagPreviousBehaviorOnly; // 0x1bc
    bool bAffectsYaw; // 0x1bd
    bool bAffectsPitch; // 0x1be
    bool bAffectsRoll; // 0x1bf
    bool bUseSubstepping; // 0x1c0
    char pad_1c1[0x3];
    float MaxTimeStep; // 0x1c4
    char pad_1c8[0x40];
    static UCameraStackBehaviorRotationLag* StaticClass();
}; // Size: 0x208
#pragma pack(pop)
