#pragma once
#include <cstdint>
#include "FComputedLevelBounds.hpp"
#include "FGameFriendlyLevelName.hpp"
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FCompositeLevelBounds {
    FComputedLevelBounds Bounds; // 0x0
    FGameFriendlyLevelName LevelName; // 0x58
    FTimespan Timestamp; // 0x68
    bool bMarkedRemoved; // 0x70
    char pad_71[0x7];
}; // Size: 0x78
#pragma pack(pop)
