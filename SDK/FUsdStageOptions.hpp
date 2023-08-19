#pragma once
#include <cstdint>
#include "EUsdUpAxis.hpp"
#pragma pack(push, 1)
struct FUsdStageOptions {
    float MetersPerUnit; // 0x0
    EUsdUpAxis UpAxis; // 0x4
    char pad_5[0x3];
}; // Size: 0x8
#pragma pack(pop)
