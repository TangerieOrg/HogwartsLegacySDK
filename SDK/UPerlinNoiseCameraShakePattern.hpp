#pragma once
#include <cstdint>
#include "FPerlinNoiseShaker.hpp"
#include "USimpleCameraShakePattern.hpp"
#pragma pack(push, 1)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern {
public:
    float LocationAmplitudeMultiplier; // 0x38
    float LocationFrequencyMultiplier; // 0x3c
    FPerlinNoiseShaker X; // 0x40
    FPerlinNoiseShaker Y; // 0x48
    FPerlinNoiseShaker Z; // 0x50
    float RotationAmplitudeMultiplier; // 0x58
    float RotationFrequencyMultiplier; // 0x5c
    FPerlinNoiseShaker Pitch; // 0x60
    FPerlinNoiseShaker Yaw; // 0x68
    FPerlinNoiseShaker Roll; // 0x70
    FPerlinNoiseShaker FOV; // 0x78
    char pad_80[0x38];
    static UPerlinNoiseCameraShakePattern* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
