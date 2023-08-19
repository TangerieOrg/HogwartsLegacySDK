#pragma once
#include <cstdint>
#include "EChaosBreakingSortMethod.hpp"
#pragma pack(push, 1)
struct FChaosBreakingEventRequestSettings {
    int32_t MaxNumberOfResults; // 0x0
    float MinRadius; // 0x4
    float MinSpeed; // 0x8
    float MinMass; // 0xc
    float MaxDistance; // 0x10
    EChaosBreakingSortMethod SortMethod; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
