#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeatherSurfaceStormType : uint8_t {
    None = 0,
    Light = 1,
    Normal = 2,
    Heavy = 3,
    Torrential = 4,
    EWeatherSurfaceStormType_MAX = 5,
};
#pragma pack(pop)
