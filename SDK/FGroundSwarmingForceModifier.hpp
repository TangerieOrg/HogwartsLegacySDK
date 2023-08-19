#pragma once
#include <cstdint>
#include "EGroundSwarmingForceModifierType.hpp"
#include "FGroundSwarmingFocus.hpp"
#pragma pack(push, 1)
struct FGroundSwarmingForceModifier {
    EGroundSwarmingForceModifierType Type; // 0x0
    char pad_1[0xf];
    FGroundSwarmingFocus Origin; // 0x10
    float InnerRadius; // 0xb0
    float InnerMultiplier; // 0xb4
    float OuterRadius; // 0xb8
    float OuterMultiplier; // 0xbc
    bool bUseXYDistance; // 0xc0
    bool bEnabled; // 0xc1
    char pad_c2[0xe];
}; // Size: 0xd0
#pragma pack(pop)
