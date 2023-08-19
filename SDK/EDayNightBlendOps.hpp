#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightBlendOps {
    DirectionalLightDirection = 0,
    DirectionalLightBasic = 1,
    DirectionalLightShafts = 2,
    SkyLightBasic = 3,
    SkyLightHemisphere = 4,
    SkyAtmosphere = 5,
    VolumetricCloudsBasic = 6,
    VolumetricCloudsAdvanced = 7,
    VolumetricCloudsShadow = 8,
    VolumetricCloudsSkyLight = 9,
    VolumetricCloudsGroundShadow = 10,
    VolumetricCloudsSceneLight = 11,
    ProbeLightingAdjustment = 12,
    ProbeLightingToneMap = 13,
    ProbeContactShadows = 14,
    EDayNightBlendOps_MAX = 15,
};
#pragma pack(pop)
