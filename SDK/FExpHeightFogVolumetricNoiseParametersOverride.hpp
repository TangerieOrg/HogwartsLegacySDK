#pragma once
#include <cstdint>
#include "FVector.hpp"
class UTexture;
#pragma pack(push, 1)
struct FExpHeightFogVolumetricNoiseParametersOverride {
    uint8_t bOverride_NoiseMinFactor : 1; // 0x0
    uint8_t bOverride_NoiseMaxFactor : 1; // 0x0
    uint8_t bOverride_NoiseTilingSize : 1; // 0x0
    uint8_t bOverride_NoiseSmoothStepMin : 1; // 0x0
    uint8_t bOverride_NoiseSmoothStepMax : 1; // 0x0
    uint8_t bOverride_BlueNoiseTexture : 1; // 0x0
    uint8_t bOverride_WindFactor : 1; // 0x0
    uint8_t bOverride_AddWindVelocity : 1; // 0x0
    uint8_t bOverride_DensityTweakingLightingThreshold : 1; // 0x1
    uint8_t bOverride_DensityTweakingMinPercentage : 1; // 0x1
    uint8_t bOverride_AliasingReduction : 1; // 0x1
    uint8_t bOverride_FullDensityDistance : 1; // 0x1
    uint8_t bOverride_MinDensityFactor : 1; // 0x1
    uint8_t pad_bitfield_1_5 : 3;
    char pad_2[0x2];
    float NoiseMinFactor; // 0x4
    float NoiseMaxFactor; // 0x8
    float NoiseTilingSize; // 0xc
    float NoiseSmoothStepMin; // 0x10
    float NoiseSmoothStepMax; // 0x14
    float WindFactor; // 0x18
    FVector AddWindVelocity; // 0x1c
    UTexture* BlueNoiseTexture; // 0x28
    float DensityTweakingLightingThreshold; // 0x30
    float DensityTweakingMinPercentage; // 0x34
    float AliasingReduction; // 0x38
    float FullDensityDistance; // 0x3c
    float MinDensityFactor; // 0x40
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
