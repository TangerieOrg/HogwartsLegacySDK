#pragma once
#include <cstdint>
#include "FFlockPersonalityDistribution.hpp"
#pragma pack(push, 1)
struct FFlockPersonalityWanderer {
    FFlockPersonalityDistribution Distribution; // 0x0
    float Frequency; // 0x8
    float MinFactor; // 0xc
    float MaxFactor; // 0x10
    char pad_14[0x14];
}; // Size: 0x28
#pragma pack(pop)
