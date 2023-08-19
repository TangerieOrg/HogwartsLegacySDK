#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FGameFriendlyLevelName.hpp"
#pragma pack(push, 1)
struct FInsideOfLevel : public FGameFriendlyLevelName {
    char pad_10[0x8];
    FBox Bounds; // 0x18
}; // Size: 0x34
#pragma pack(pop)
