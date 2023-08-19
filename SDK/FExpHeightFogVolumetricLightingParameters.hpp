#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExpHeightFogVolumetricLightingParameters {
    float VolumetricLightingDirectionalLightScattering; // 0x0
    float VolumetricLightingDirectionalLightDesaturation; // 0x4
    float VolumetricLightingShadowsNearMinimum; // 0x8
    float VolumetricLightingShadowsFarMinimum; // 0xc
    float VolumetricLightingShadowsNearDistance; // 0x10
    float VolumetricLightingShadowsFarDistance; // 0x14
    float VolumetricLightingCloudShadowsNearMinimum; // 0x18
    float VolumetricLightingCloudShadowsFarMinimum; // 0x1c
    float VolumetricLightingCloudShadowsNearDistance; // 0x20
    float VolumetricLightingCloudShadowsFarDistance; // 0x24
    float VolumetricLightingHistoryWeight; // 0x28
    float VolumetricLightingHistoryWeightStableCell; // 0x2c
    float VolumetricLightingHistoryWeightMovingLight; // 0x30
}; // Size: 0x34
#pragma pack(pop)
