#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FBasicParticleData {
    FVector Position; // 0x0
    float Size; // 0xc
    FVector Velocity; // 0x10
}; // Size: 0x1c
#pragma pack(pop)
