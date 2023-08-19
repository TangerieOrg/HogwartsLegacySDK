#pragma once
#include <cstdint>
#include "FFlockPersonalityDistribution.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FFlockPersonalitySpooker {
    FFlockPersonalityDistribution Distribution; // 0x0
    float MinCalmTime; // 0x8
    float MaxCalmTime; // 0xc
    float MinSpookDuration; // 0x10
    float MaxSpookDuration; // 0x14
    FVector SpookForce; // 0x18
    char pad_24[0x14];
}; // Size: 0x38
#pragma pack(pop)
