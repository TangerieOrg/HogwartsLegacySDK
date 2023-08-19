#pragma once
#include <cstdint>
#include "EVolumeLightingMethod.hpp"
#include "FColor.hpp"
#pragma pack(push, 1)
struct FLightmassWorldInfoSettings {
    float StaticLightingLevelScale; // 0x0
    int32_t NumIndirectLightingBounces; // 0x4
    int32_t NumSkyLightingBounces; // 0x8
    float IndirectLightingQuality; // 0xc
    float IndirectLightingSmoothness; // 0x10
    FColor EnvironmentColor; // 0x14
    float EnvironmentIntensity; // 0x18
    float EmissiveBoost; // 0x1c
    float DiffuseBoost; // 0x20
    EVolumeLightingMethod VolumeLightingMethod; // 0x24
    uint8_t bUseAmbientOcclusion : 1; // 0x25
    uint8_t bGenerateAmbientOcclusionMaterialMask : 1; // 0x25
    uint8_t bVisualizeMaterialDiffuse : 1; // 0x25
    uint8_t bVisualizeAmbientOcclusion : 1; // 0x25
    uint8_t bCompressLightmaps : 1; // 0x25
    uint8_t pad_bitfield_25_5 : 3;
    char pad_26[0x2];
    float VolumetricLightmapDetailCellSize; // 0x28
    float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c
    float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30
    float VolumeLightSamplePlacementScale; // 0x34
    float DirectIlluminationOcclusionFraction; // 0x38
    float IndirectIlluminationOcclusionFraction; // 0x3c
    float OcclusionExponent; // 0x40
    float FullyOccludedSamplesFraction; // 0x44
    float MaxOcclusionDistance; // 0x48
}; // Size: 0x4c
#pragma pack(pop)
