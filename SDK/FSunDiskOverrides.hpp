#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSunDiskOverrides {
    float SizeFactor; // 0x0
    float Desaturation; // 0x4
    float BrightnessFactor; // 0x8
    float CoronaBrightnessFactor; // 0xc
    float CoronaAlphaFactor; // 0x10
}; // Size: 0x14
#pragma pack(pop)
