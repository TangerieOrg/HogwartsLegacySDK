#pragma once
#include <cstdint>
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterMIDCacheEntry {
    char pad_0[0x50];
    FDateTime Touched; // 0x50
}; // Size: 0x58
#pragma pack(pop)
