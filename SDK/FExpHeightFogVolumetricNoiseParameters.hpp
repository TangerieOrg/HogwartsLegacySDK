#pragma once
#include <cstdint>
#include "FVector.hpp"
class UTexture;
#pragma pack(push, 1)
struct FExpHeightFogVolumetricNoiseParameters {
    float NoiseMinFactor; // 0x0
    float NoiseMaxFactor; // 0x4
    float NoiseTilingSize; // 0x8
    float NoiseSmoothStepMin; // 0xc
    float NoiseSmoothStepMax; // 0x10
    float WindFactor; // 0x14
    FVector AddWindVelocity; // 0x18
    char pad_24[0x4];
    UTexture* BlueNoiseTexture; // 0x28
    float DensityTweakingLightingThreshold; // 0x30
    float DensityTweakingMinPercentage; // 0x34
    float AliasingReduction; // 0x38
    float FullDensityDistance; // 0x3c
    float MinDensityFactor; // 0x40
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
