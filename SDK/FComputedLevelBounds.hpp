#pragma once
#include <cstdint>
#include "FBox.hpp"
#pragma pack(push, 1)
struct FComputedLevelBounds {
    FBox Total; // 0x0
    FBox Actors; // 0x1c
    FBox Landscape; // 0x38
    bool bUsedLevelBoundsActor; // 0x54
    char pad_55[0x3];
}; // Size: 0x58
#pragma pack(pop)
