#pragma once
#include <cstdint>
#include "FTypeface.hpp"
#pragma pack(push, 1)
struct FCompositeFallbackFont {
    FTypeface Typeface; // 0x0
    float ScalingFactor; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
