#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FDirectionalLightAdvancedParameters {
    float ShadowCascadeBiasDistribution; // 0x0
    float LightSourceAngle; // 0x4
    float LightSourceSoftAngle; // 0x8
    FLightingChannels LightingChannels; // 0xc
    char pad_d[0x3];
    float CloudShadowStrength; // 0x10
    float CloudShadowOnAtmosphereStrength; // 0x14
    float CloudShadowOnSurfaceStrength; // 0x18
    FVector2D CloudShadowMinMax; // 0x1c
    int32_t AtmosphereSunLightIndex; // 0x24
    FLinearColor AtmosphereSunDiskColorScale; // 0x28
    bool bPerPixelAtmosphereTransmittance; // 0x38
    bool bAffectDynamicIndirectLighting; // 0x39
    bool bAffectTranslucentLighting; // 0x3a
    bool bTransmission; // 0x3b
    bool bUsedAsAtmosphereSunLight; // 0x3c
    bool bProbeOnly; // 0x3d
    char pad_3e[0x2];
}; // Size: 0x40
#pragma pack(pop)
