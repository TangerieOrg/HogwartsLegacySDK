#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightCullingPerLightFeatureSettings {
    uint8_t bDisableShadowCulling : 1; // 0x0
    uint8_t bDisableVolumetricScatterCulling : 1; // 0x0
    uint8_t bDisableVolumetricShadowCulling : 1; // 0x0
    uint8_t bDisableContactShadowsCulling : 1; // 0x0
    uint8_t bDisableTranslucentLightingCulling : 1; // 0x0
    uint8_t bDisableVolumetricLightingCulling : 1; // 0x0
    uint8_t pad_bitfield_0_6 : 2;
}; // Size: 0x1
#pragma pack(pop)
