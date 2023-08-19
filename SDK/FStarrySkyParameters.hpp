#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FStarrySkyParameters {
    float IntensityMod; // 0x0
    float MagnitudeCutoff; // 0x4
    float MoonFadeRadius; // 0x8
    float MoonFadeHardness; // 0xc
    float Desaturation; // 0x10
    float HorizonFadePower; // 0x14
    float TwinkleIntensity; // 0x18
    float TwinkleSpeed; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
