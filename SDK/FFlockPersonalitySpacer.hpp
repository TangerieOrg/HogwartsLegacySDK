#pragma once
#include <cstdint>
#include "FFlockPersonalityDistribution.hpp"
#pragma pack(push, 1)
struct FFlockPersonalitySpacer {
    FFlockPersonalityDistribution Distribution; // 0x0
    float MinFactor; // 0x8
    float MaxFactor; // 0xc
    char pad_10[0x10];
}; // Size: 0x20
#pragma pack(pop)
