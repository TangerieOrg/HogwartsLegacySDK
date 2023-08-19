#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricFogDensityMapParameters.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricAdvancedParameters {
    float DensityTweakingLightingThreshold; // 0x0
    float DensityTweakingMinPercentage; // 0x4
    float AliasingReduction; // 0x8
    float VolumetricFogHighQualityDistance; // 0xc
    float EmptyCellSkyOcclusion; // 0x10
    bool bEnableVariableScatteringDistribution; // 0x14
    char pad_15[0x3];
    float MinScatteringDistribution; // 0x18
    float MaxScatteringDistribution; // 0x1c
    float ScatteringDistributionInterpStart; // 0x20
    float ScatteringDistributionInterpEnd; // 0x24
    FExpHeightFogVolumetricFogDensityMapParameters DensityMap; // 0x28
    float FullDensityDistance; // 0x60
    float MinDensityFactor; // 0x64
}; // Size: 0x68
#pragma pack(pop)
