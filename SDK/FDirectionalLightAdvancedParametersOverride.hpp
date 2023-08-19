#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FDirectionalLightAdvancedParametersOverride {
    uint8_t bOverride_LightSourceAngle : 1; // 0x0
    uint8_t bOverride_LightSourceSoftAngle : 1; // 0x0
    uint8_t bOverride_LightingChannels : 1; // 0x0
    uint8_t bOverride_AffectDynamicIndirectLighting : 1; // 0x0
    uint8_t bOverride_AffectTranslucentLighting : 1; // 0x0
    uint8_t bOverride_Transmission : 1; // 0x0
    uint8_t bOverride_UsedAsAtmosphereSunLight : 1; // 0x0
    uint8_t bOverride_ProbeOnly : 1; // 0x0
    uint8_t bOverride_ShadowCascadeBiasDistribution : 1; // 0x1
    uint8_t bOverride_AtmosphereSunLightIndex : 1; // 0x1
    uint8_t bOverride_CloudShadowStrength : 1; // 0x1
    uint8_t bOverride_CloudShadowOnAtmosphereStrength : 1; // 0x1
    uint8_t bOverride_CloudShadowOnSurfaceStrength : 1; // 0x1
    uint8_t bOverride_CloudShadowMinMax : 1; // 0x1
    uint8_t bOverride_AtmosphereSunDiskColorScale : 1; // 0x1
    uint8_t bOverride_bPerPixelAtmosphereTransmittance : 1; // 0x1
    char pad_2[0x2];
    float ShadowCascadeBiasDistribution; // 0x4
    float LightSourceAngle; // 0x8
    float LightSourceSoftAngle; // 0xc
    FLightingChannels LightingChannels; // 0x10
    char pad_11[0x3];
    float CloudShadowStrength; // 0x14
    float CloudShadowOnAtmosphereStrength; // 0x18
    float CloudShadowOnSurfaceStrength; // 0x1c
    FVector2D CloudShadowMinMax; // 0x20
    int32_t AtmosphereSunLightIndex; // 0x28
    FLinearColor AtmosphereSunDiskColorScale; // 0x2c
    bool bPerPixelAtmosphereTransmittance; // 0x3c
    bool bAffectDynamicIndirectLighting; // 0x3d
    bool bAffectTranslucentLighting; // 0x3e
    bool bTransmission; // 0x3f
    bool bUsedAsAtmosphereSunLight; // 0x40
    bool bProbeOnly; // 0x41
    char pad_42[0x2];
}; // Size: 0x44
#pragma pack(pop)
