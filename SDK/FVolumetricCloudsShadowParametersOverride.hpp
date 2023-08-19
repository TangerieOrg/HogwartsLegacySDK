#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsShadowParametersOverride {
    uint8_t bOverride_ShadowScale : 1; // 0x0
    uint8_t bOverride_ShadowMapCloudShadowDensity : 1; // 0x0
    uint8_t bOverride_RayMarchCloudShadowScale : 1; // 0x0
    uint8_t bOverride_RayMarchShadowDensity : 1; // 0x0
    uint8_t bOverride_SkyLightShadowDensity : 1; // 0x0
    uint8_t pad_bitfield_0_5 : 3;
    char pad_1[0x3];
    float ShadowScale; // 0x4
    float ShadowMapCloudShadowDensity; // 0x8
    float RayMarchCloudShadowScale; // 0xc
    float RayMarchShadowDensity; // 0x10
    float SkyLightShadowDensity; // 0x14
}; // Size: 0x18
#pragma pack(pop)
