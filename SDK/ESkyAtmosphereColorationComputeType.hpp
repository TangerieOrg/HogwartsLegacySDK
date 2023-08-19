#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkyAtmosphereColorationComputeType : uint8_t {
    SkyColorOnly = 0,
    SunLightOnly = 1,
    MoonLightOnly = 2,
    DirLightOnly = 3,
    SunLit = 4,
    MoonLit = 5,
    DirLit = 6,
    ESkyAtmosphereColorationComputeType_MAX = 7,
};
#pragma pack(pop)
