#pragma once
#include <cstdint>
#include "FAdjustedValueBoolean.hpp"
#include "FAdjustedValueFloat.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricAdvancedParametersRelative {
    FAdjustedValueFloat DensityTweakingLightingThreshold; // 0x0
    FAdjustedValueFloat DensityTweakingMinPercentage; // 0x20
    FAdjustedValueFloat AliasingReduction; // 0x40
    FAdjustedValueFloat VolumetricFogHighQualityDistance; // 0x60
    FAdjustedValueFloat EmptyCellSkyOcclusion; // 0x80
    FAdjustedValueBoolean bEnableVariableScatteringDistribution; // 0xa0
    char pad_a1[0x3];
    FAdjustedValueFloat MinScatteringDistribution; // 0xa4
    FAdjustedValueFloat MaxScatteringDistribution; // 0xc4
    FAdjustedValueFloat ScatteringDistributionInterpStart; // 0xe4
    FAdjustedValueFloat ScatteringDistributionInterpEnd; // 0x104
    FAdjustedValueFloat FullDensityDistance; // 0x124
    FAdjustedValueFloat MinDensityFactor; // 0x144
}; // Size: 0x164
#pragma pack(pop)
