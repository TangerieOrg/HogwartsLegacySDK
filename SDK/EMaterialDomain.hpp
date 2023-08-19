#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialDomain : uint8_t {
    MD_Surface = 0,
    MD_DeferredDecal = 1,
    MD_LightFunction = 2,
    MD_Volume = 3,
    MD_PostProcess = 4,
    MD_UI = 5,
    MD_RuntimeVirtualTexture = 6,
    MD_WeatherAnimation = 7,
    MD_WeatherCoverage = 8,
    MD_LocalForce = 9,
    MD_MAX = 10,
};
#pragma pack(pop)
