#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightLightSource : uint8_t {
    Sun = 0,
    Moon = 1,
    LerpingSun = 2,
    LerpingMoon = 3,
    Invalid = 4,
    EDayNightLightSource_MAX = 5,
};
#pragma pack(pop)
