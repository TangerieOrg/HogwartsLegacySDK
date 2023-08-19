#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDirectionalLightCascadedShadowMaps {
    float DynamicShadowDistanceMovableLight; // 0x0
    int32_t DynamicShadowCascades; // 0x4
    float CascadeDistributionExponent; // 0x8
    float CascadeTransitionFraction; // 0xc
    float ShadowDistanceFadeoutFraction; // 0x10
    int32_t FarShadowCascadeCount; // 0x14
    float FarShadowDistance; // 0x18
    float CachedDirectionalShadowDistance; // 0x1c
    bool bUseCachedDirectionalShadowMaps; // 0x20
    char pad_21[0x3];
}; // Size: 0x24
#pragma pack(pop)
