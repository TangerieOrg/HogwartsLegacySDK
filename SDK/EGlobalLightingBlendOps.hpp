#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightingBlendOps {
    LightDirection = 0,
    LightParameters = 1,
    SecondaryLightDirection = 2,
    SecondaryLightParameters = 3,
    SkyLightParameters = 4,
    ExpHeightFogParameters = 5,
    CloudsLightingParameters = 6,
    CloudsPresetParameters = 7,
    CloudsWindParameters = 8,
    ProbeLightingParameters = 9,
    SkyAtmosphereParameters = 10,
    CustomBlendables = 11,
    EGlobalLightingBlendOps_MAX = 12,
};
#pragma pack(pop)
