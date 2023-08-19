#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FChaosRemovalEventData {
    FVector Location; // 0x0
    float Mass; // 0xc
    int32_t ParticleIndex; // 0x10
}; // Size: 0x14
#pragma pack(pop)
