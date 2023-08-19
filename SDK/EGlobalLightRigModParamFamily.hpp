#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightRigModParamFamily {
    NoFamily = 0,
    DirectionalLightDirection = 1,
    DirectionalLightParameters = 2,
    SkyLight = 3,
    SkyAtmosphere = 4,
    CloudLighting = 5,
    CloudsWind = 6,
    ProbeLighting = 7,
    ExponentialHeightFog = 8,
    EGlobalLightRigModParamFamily_MAX = 9,
};
#pragma pack(pop)
