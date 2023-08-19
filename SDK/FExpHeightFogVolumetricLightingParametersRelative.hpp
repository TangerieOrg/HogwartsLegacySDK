#pragma once
#include <cstdint>
#include "FAdjustedValueFloat.hpp"
#pragma pack(push, 1)
struct FExpHeightFogVolumetricLightingParametersRelative {
    FAdjustedValueFloat VolumetricLightingDirectionalLightScattering; // 0x0
    FAdjustedValueFloat VolumetricLightingDirectionalLightDesaturation; // 0x20
    FAdjustedValueFloat VolumetricLightingShadowsNearMinimum; // 0x40
    FAdjustedValueFloat VolumetricLightingShadowsFarMinimum; // 0x60
    FAdjustedValueFloat VolumetricLightingShadowsNearDistance; // 0x80
    FAdjustedValueFloat VolumetricLightingShadowsFarDistance; // 0xa0
    FAdjustedValueFloat VolumetricLightingCloudShadowsNearMinimum; // 0xc0
    FAdjustedValueFloat VolumetricLightingCloudShadowsFarMinimum; // 0xe0
    FAdjustedValueFloat VolumetricLightingCloudShadowsNearDistance; // 0x100
    FAdjustedValueFloat VolumetricLightingCloudShadowsFarDistance; // 0x120
    FAdjustedValueFloat VolumetricLightingHistoryWeight; // 0x140
    FAdjustedValueFloat VolumetricLightingHistoryWeightStableCell; // 0x160
    FAdjustedValueFloat VolumetricLightingHistoryWeightMovingLight; // 0x180
}; // Size: 0x1a0
#pragma pack(pop)
