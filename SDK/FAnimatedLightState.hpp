#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimatedLightState {
    float HueNoise; // 0x0
    float SaturationNoise; // 0x4
    float IntensityMod; // 0x8
    float NoiseIntensity; // 0xc
    float IntensityNoiseFactor; // 0x10
}; // Size: 0x14
#pragma pack(pop)
