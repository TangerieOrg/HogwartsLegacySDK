#pragma once
#include <cstdint>
#include "EChaosTrailingSortMethod.hpp"
#pragma pack(push, 1)
struct FChaosTrailingEventRequestSettings {
    int32_t MaxNumberOfResults; // 0x0
    float MinMass; // 0x4
    float MinSpeed; // 0x8
    float MinAngularSpeed; // 0xc
    float MaxDistance; // 0x10
    EChaosTrailingSortMethod SortMethod; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
