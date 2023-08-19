#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FPixelStarRenderingParameters {
    float LinearBrightnessMin; // 0x0
    float LinearBrightnessMax; // 0x4
    float LinearBrightnessPower; // 0x8
    float MagnitudeBrightnessMin; // 0xc
    float MagnitudeBrightnessMax; // 0x10
    bool bLinearBrightness; // 0x14
    char pad_15[0x3];
}; // Size: 0x18
#pragma pack(pop)
