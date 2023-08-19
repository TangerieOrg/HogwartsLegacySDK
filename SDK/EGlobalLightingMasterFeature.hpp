#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightingMasterFeature {
    ProbeLighting = 0,
    CloudsLighting = 1,
    CloudsPreset = 2,
    CloudsWind = 3,
    CloudsSceneLightDirection = 4,
    CloudsSceneLightColor = 5,
    CloudsSceneLightIntensity = 6,
    CloudsSceneLightSaturation = 7,
    EGlobalLightingMasterFeature_MAX = 8,
};
#pragma pack(pop)
