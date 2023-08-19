#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FExpHeightFogVolumetricLightingParametersOverride {
    uint8_t bOverride_VolumetricLightingDirectionalLightScattering : 1; // 0x0
    uint8_t bOverride_VolumetricLightingDirectionalLightDesaturation : 1; // 0x0
    uint8_t bOverride_VolumetricLightingShadowsNearMinimum : 1; // 0x0
    uint8_t bOverride_VolumetricLightingShadowsFarMinimum : 1; // 0x0
    uint8_t bOverride_VolumetricLightingShadowsNearDistance : 1; // 0x0
    uint8_t bOverride_VolumetricLightingShadowsFarDistance : 1; // 0x0
    uint8_t bOverride_VolumetricLightingCloudShadowsNearMinimum : 1; // 0x0
    uint8_t bOverride_VolumetricLightingCloudShadowsFarMinimum : 1; // 0x0
    uint8_t bOverride_VolumetricLightingCloudShadowsNearDistance : 1; // 0x1
    uint8_t bOverride_VolumetricLightingCloudShadowsFarDistance : 1; // 0x1
    uint8_t bOverride_VolumetricLightingHistoryWeight : 1; // 0x1
    uint8_t bOverride_VolumetricLightingHistoryWeightStableCell : 1; // 0x1
    uint8_t bOverride_VolumetricLightingHistoryWeightMovingLight : 1; // 0x1
    uint8_t pad_bitfield_1_5 : 3;
    char pad_2[0x2];
    float VolumetricLightingDirectionalLightScattering; // 0x4
    float VolumetricLightingDirectionalLightDesaturation; // 0x8
    float VolumetricLightingShadowsNearMinimum; // 0xc
    float VolumetricLightingShadowsFarMinimum; // 0x10
    float VolumetricLightingShadowsNearDistance; // 0x14
    float VolumetricLightingShadowsFarDistance; // 0x18
    float VolumetricLightingCloudShadowsNearMinimum; // 0x1c
    float VolumetricLightingCloudShadowsFarMinimum; // 0x20
    float VolumetricLightingCloudShadowsNearDistance; // 0x24
    float VolumetricLightingCloudShadowsFarDistance; // 0x28
    float VolumetricLightingHistoryWeight; // 0x2c
    float VolumetricLightingHistoryWeightStableCell; // 0x30
    float VolumetricLightingHistoryWeightMovingLight; // 0x34
}; // Size: 0x38
#pragma pack(pop)
