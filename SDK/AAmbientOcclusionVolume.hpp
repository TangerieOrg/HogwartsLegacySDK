#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FCustomBlendableGTAO.hpp"
#include "FLinearColor.hpp"
#include "FPostProcessSettings.hpp"
class UTextureCube;
class UGlobalLightingBlendableGTAOFromAOVolume;
#pragma pack(push, 1)
class AAmbientOcclusionVolume : public AVolume {
public:
    char pad_280[0x10];
    FCustomBlendableGTAO GTAO; // 0x290
    float BlendablePriority; // 0x2b4
    float AmbientOcclusionIntensity; // 0x2b8
    float AmbientOcclusionRadius; // 0x2bc
    UTextureCube* AmbientCubemap; // 0x2c0
    FLinearColor AmbientCubemapTint; // 0x2c8
    float AmbientCubemapIntensity; // 0x2d8
    float AmbientOcclusionStaticFraction; // 0x2dc
    float AmbientOcclusionFadeDistance; // 0x2e0
    float AmbientOcclusionFadeRadius; // 0x2e4
    float AmbientOcclusionPower; // 0x2e8
    float AmbientOcclusionBias; // 0x2ec
    float AmbientOcclusionQuality; // 0x2f0
    float AmbientOcclusionMipBlend; // 0x2f4
    float AmbientOcclusionMipScale; // 0x2f8
    float AmbientOcclusionMipThreshold; // 0x2fc
    float Priority; // 0x300
    char pad_304[0x4];
    FBlendDomain BlendDomain; // 0x308
    float BlendRadius; // 0x340
    float BlendWeight; // 0x344
    uint8_t bUnbounded : 1; // 0x348
    uint8_t bEnabled : 1; // 0x348
    uint8_t AmbientOcclusionRadiusInWS : 1; // 0x348
    uint8_t pad_bitfield_348_3 : 5;
    char pad_349[0x3];
    uint8_t bOverride_AmbientOcclusionIntensity : 1; // 0x34c
    uint8_t bOverride_AmbientOcclusionRadius : 1; // 0x34c
    uint8_t bOverride_AmbientCubemapTint : 1; // 0x34c
    uint8_t bOverride_AmbientCubemapIntensity : 1; // 0x34c
    uint8_t bOverride_AmbientOcclusionStaticFraction : 1; // 0x34c
    uint8_t bOverride_AmbientOcclusionFadeDistance : 1; // 0x34c
    uint8_t bOverride_AmbientOcclusionFadeRadius : 1; // 0x34c
    uint8_t bOverride_AmbientOcclusionRadiusInWS : 1; // 0x34c
    uint8_t bOverride_AmbientOcclusionPower : 1; // 0x34d
    uint8_t bOverride_AmbientOcclusionBias : 1; // 0x34d
    uint8_t bOverride_AmbientOcclusionQuality : 1; // 0x34d
    uint8_t bOverride_AmbientOcclusionMipBlend : 1; // 0x34d
    uint8_t bOverride_AmbientOcclusionMipScale : 1; // 0x34d
    uint8_t bOverride_AmbientOcclusionMipThreshold : 1; // 0x34d
    uint8_t pad_bitfield_34d_6 : 2;
    char pad_34e[0x2];
    FPostProcessSettings PostProcessSettings; // 0x350
    UGlobalLightingBlendableGTAOFromAOVolume* GTAOBlendable; // 0x940
    char pad_948[0x8];
    static AAmbientOcclusionVolume* StaticClass();
    void UpdatePostProcessSettings();
    void SetPriority(float NewPriority);
}; // Size: 0x950
#pragma pack(pop)
