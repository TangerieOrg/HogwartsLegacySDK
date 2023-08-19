#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeatherSurfacePrecipitation : uint8_t {
    None = 0,
    Rain = 1,
    Snow = 2,
    EWeatherSurfacePrecipitation_MAX = 3,
};
#pragma pack(pop)
