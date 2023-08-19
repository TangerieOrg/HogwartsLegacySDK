#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsShadowParameters {
    float ShadowScale; // 0x0
    float ShadowMapCloudShadowDensity; // 0x4
    float RayMarchCloudShadowScale; // 0x8
    float RayMarchShadowDensity; // 0xc
    float SkyLightShadowDensity; // 0x10
}; // Size: 0x14
#pragma pack(pop)
