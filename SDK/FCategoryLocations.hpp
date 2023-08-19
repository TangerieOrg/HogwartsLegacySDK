#pragma once
#include <cstdint>
#include "FRandomStream.hpp"
#pragma pack(push, 1)
struct FCategoryLocations {
    char pad_0[0x14];
    FRandomStream Randomizer; // 0x14
    char pad_1c[0x14];
}; // Size: 0x30
#pragma pack(pop)
