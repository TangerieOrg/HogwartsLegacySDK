#pragma once
#include <cstdint>
#include "FMaterialSwapKeyUI.hpp"
#pragma pack(push, 1)
struct FMaterialSwapFadeSettings {
    FMaterialSwapKeyUI Swap; // 0x0
    FName OpacityParameter; // 0x110
    bool bUseAutoRefreshSwap; // 0x118
    char pad_119[0x7];
}; // Size: 0x120
#pragma pack(pop)
