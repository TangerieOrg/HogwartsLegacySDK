#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCurveAtlasColorAdjustments {
    uint8_t bChromaKeyTexture : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x3];
    float AdjustBrightness; // 0x4
    float AdjustBrightnessCurve; // 0x8
    float AdjustVibrance; // 0xc
    float AdjustSaturation; // 0x10
    float AdjustRGBCurve; // 0x14
    float AdjustHue; // 0x18
    float AdjustMinAlpha; // 0x1c
    float AdjustMaxAlpha; // 0x20
}; // Size: 0x24
#pragma pack(pop)
