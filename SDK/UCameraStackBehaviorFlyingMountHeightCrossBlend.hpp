#pragma once
#include <cstdint>
#include "FFloatRange.hpp"
#include "UCameraStackBehaviorMultiCrossBlendStandalone.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorFlyingMountHeightCrossBlend : public UCameraStackBehaviorMultiCrossBlendStandalone {
public:
    FFloatRange HeightRange; // 0x368
    FFloatRange DescendingVelocityRange; // 0x378
    float FilterHalflifeIncrease; // 0x388
    float FilterHalflifeDecrease; // 0x38c
    float FilterHalflifeDescending; // 0x390
    char pad_394[0x14];
    static UCameraStackBehaviorFlyingMountHeightCrossBlend* StaticClass();
}; // Size: 0x3a8
#pragma pack(pop)
