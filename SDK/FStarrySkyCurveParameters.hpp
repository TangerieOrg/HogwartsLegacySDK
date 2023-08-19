#pragma once
#include <cstdint>
class UCurveFloat;
#pragma pack(push, 1)
struct FStarrySkyCurveParameters {
    UCurveFloat* IntensityMod; // 0x0
    UCurveFloat* MagnitudeCutoff; // 0x8
    UCurveFloat* MoonFadeRadius; // 0x10
    UCurveFloat* MoonFadeHardness; // 0x18
    UCurveFloat* Desaturation; // 0x20
    UCurveFloat* HorizonFadePower; // 0x28
    float TwinkleIntensity; // 0x30
    float TwinkleSpeed; // 0x34
}; // Size: 0x38
#pragma pack(pop)
