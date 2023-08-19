#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDirectionalLightCascadedShadowMapsOverride {
    uint8_t bOverride_DynamicShadowDistanceMovableLight : 1; // 0x0
    uint8_t bOverride_DynamicShadowCascades : 1; // 0x0
    uint8_t bOverride_CascadeDistributionExponent : 1; // 0x0
    uint8_t bOverride_CascadeTransitionFraction : 1; // 0x0
    uint8_t bOverride_ShadowDistanceFadeoutFraction : 1; // 0x0
    uint8_t bOverride_FarShadowCascadeCount : 1; // 0x0
    uint8_t bOverride_FarShadowDistance : 1; // 0x0
    uint8_t bOverride_CachedDirectionalShadowDistance : 1; // 0x0
    uint8_t bOverride_bUseCachedDirectionalShadowMaps : 1; // 0x1
    uint8_t pad_bitfield_1_1 : 7;
    char pad_2[0x2];
    float DynamicShadowDistanceMovableLight; // 0x4
    int32_t DynamicShadowCascades; // 0x8
    float CascadeDistributionExponent; // 0xc
    float CascadeTransitionFraction; // 0x10
    float ShadowDistanceFadeoutFraction; // 0x14
    int32_t FarShadowCascadeCount; // 0x18
    float FarShadowDistance; // 0x1c
    float CachedDirectionalShadowDistance; // 0x20
    bool bUseCachedDirectionalShadowMaps; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
