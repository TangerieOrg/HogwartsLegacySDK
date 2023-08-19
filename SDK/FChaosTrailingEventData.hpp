#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FChaosTrailingEventData {
    FVector Location; // 0x0
    FVector Velocity; // 0xc
    FVector AngularVelocity; // 0x18
    float Mass; // 0x24
    int32_t ParticleIndex; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
