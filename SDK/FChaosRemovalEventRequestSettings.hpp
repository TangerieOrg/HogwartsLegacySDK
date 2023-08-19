#pragma once
#include <cstdint>
#include "EChaosRemovalSortMethod.hpp"
#pragma pack(push, 1)
struct FChaosRemovalEventRequestSettings {
    int32_t MaxNumberOfResults; // 0x0
    float MinMass; // 0x4
    float MaxDistance; // 0x8
    EChaosRemovalSortMethod SortMethod; // 0xc
    char pad_d[0x3];
}; // Size: 0x10
#pragma pack(pop)
