#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMoonPathMode : uint8_t {
    SunRelative = 0,
    MoonRelative = 1,
    Absolute = 2,
    EMoonPathMode_MAX = 3,
};
#pragma pack(pop)
