#pragma once
#include <cstdint>
#include "EChaosCollisionSortMethod.hpp"
#pragma pack(push, 1)
struct FChaosCollisionEventRequestSettings {
    int32_t MaxNumberResults; // 0x0
    float MinMass; // 0x4
    float MinSpeed; // 0x8
    float MinImpulse; // 0xc
    float MaxDistance; // 0x10
    EChaosCollisionSortMethod SortMethod; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
