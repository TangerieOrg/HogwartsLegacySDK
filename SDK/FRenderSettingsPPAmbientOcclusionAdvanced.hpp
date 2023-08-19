#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRenderSettingsPPAmbientOcclusionAdvanced {
    uint8_t bOverride_AmbientOcclusionStaticFraction : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionFadeDistance : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionFadeRadius : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionPower : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionBias : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionQuality : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionMipBlend : 1; // 0x0
    uint8_t bOverride_AmbientOcclusionMipScale : 1; // 0x1
    uint8_t bOverride_AmbientOcclusionMipThreshold : 1; // 0x1
    uint8_t pad_bitfield_1_2 : 6;
    char pad_2[0x2];
    float AmbientOcclusionStaticFraction; // 0x4
    uint8_t AmbientOcclusionRadiusInWS : 1; // 0x8
    uint8_t pad_bitfield_8_1 : 7;
    char pad_9[0x3];
    float AmbientOcclusionFadeDistance; // 0xc
    float AmbientOcclusionFadeRadius; // 0x10
    float AmbientOcclusionPower; // 0x14
    float AmbientOcclusionBias; // 0x18
    float AmbientOcclusionQuality; // 0x1c
    float AmbientOcclusionMipBlend; // 0x20
    float AmbientOcclusionMipScale; // 0x24
    float AmbientOcclusionMipThreshold; // 0x28
}; // Size: 0x2c
#pragma pack(pop)
