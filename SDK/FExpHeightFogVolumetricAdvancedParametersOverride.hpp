#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricFogDensityMapParametersOverride.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricAdvancedParametersOverride {
    uint8_t bOverride_DensityTweakingLightingThreshold : 1; // 0x0
    uint8_t bOverride_DensityTweakingMinPercentage : 1; // 0x0
    uint8_t bOverride_AliasingReduction : 1; // 0x0
    uint8_t bOverride_VolumetricFogHighQualityDistance : 1; // 0x0
    uint8_t bOverride_EmptyCellSkyOcclusion : 1; // 0x0
    uint8_t bOverride_bEnableVariableScatteringDistribution : 1; // 0x0
    uint8_t bOverride_MinScatteringDistribution : 1; // 0x0
    uint8_t bOverride_MaxScatteringDistribution : 1; // 0x0
    uint8_t bOverride_ScatteringDistributionInterpStart : 1; // 0x1
    uint8_t bOverride_ScatteringDistributionInterpEnd : 1; // 0x1
    uint8_t bOverride_FullDensityDistance : 1; // 0x1
    uint8_t bOverride_MinDensityFactor : 1; // 0x1
    uint8_t pad_bitfield_1_4 : 4;
    char pad_2[0x2];
    float DensityTweakingLightingThreshold; // 0x4
    float DensityTweakingMinPercentage; // 0x8
    float AliasingReduction; // 0xc
    float VolumetricFogHighQualityDistance; // 0x10
    float EmptyCellSkyOcclusion; // 0x14
    bool bEnableVariableScatteringDistribution; // 0x18
    char pad_19[0x3];
    float MinScatteringDistribution; // 0x1c
    float MaxScatteringDistribution; // 0x20
    float ScatteringDistributionInterpStart; // 0x24
    float ScatteringDistributionInterpEnd; // 0x28
    char pad_2c[0x4];
    FExpHeightFogVolumetricFogDensityMapParametersOverride DensityMap; // 0x30
    float FullDensityDistance; // 0x70
    float MinDensityFactor; // 0x74
}; // Size: 0x78
#pragma pack(pop)
