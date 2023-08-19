#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGlobalLightingMasterComponent {
    DirectionalLight = 0,
    SecondaryDirectionalLight = 1,
    SkyLight = 2,
    SkyAtmosphere = 3,
    ExponentialHeightFog = 4,
    VolumetricClouds = 5,
    EGlobalLightingMasterComponent_MAX = 6,
};
#pragma pack(pop)
