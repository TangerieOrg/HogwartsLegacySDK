#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FChaosBreakingEventData {
    FVector Location; // 0x0
    FVector Velocity; // 0xc
    float Mass; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
