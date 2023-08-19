#pragma once
#include <cstdint>
#include "EAnimatedLightComponentNoiseType.hpp"
#pragma pack(push, 1)
struct FAnimatedLightSettings {
    float WaveSpeed1; // 0x0
    float WaveSpeed2; // 0x4
    float MinIntensity; // 0x8
    EAnimatedLightComponentNoiseType IntensityNoiseType; // 0xc
    char pad_d[0x3];
    float IntensityNoiseSpeed; // 0x10
    float IntensityNoiseFactor; // 0x14
    EAnimatedLightComponentNoiseType HueNoiseType; // 0x18
    char pad_19[0x3];
    float HueNoiseSpeed; // 0x1c
    float HueNoiseAmount; // 0x20
    EAnimatedLightComponentNoiseType SaturationNoiseType; // 0x24
    char pad_25[0x3];
    float SaturationNoiseSpeed; // 0x28
    float SaturationNoiseAmount; // 0x2c
    uint8_t bIntensityFlicker : 1; // 0x30
    uint8_t bAddIntensityNoise : 1; // 0x30
    uint8_t bAddHSVNoise : 1; // 0x30
    uint8_t pad_bitfield_30_3 : 5;
    char pad_31[0x3];
}; // Size: 0x34
#pragma pack(pop)
