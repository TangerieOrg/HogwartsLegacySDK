#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightTweakDirectionalLightMode : uint8_t {
    SunAndMoon = 0,
    SunOnly = 1,
    MoonOnly = 2,
    EDayNightTweakDirectionalLightMode_MAX = 3,
};
#pragma pack(pop)
