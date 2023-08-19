#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPreviewMode : uint8_t {
    NONE = 0,
    DEFAULT = 1,
    WEATHER_COVERAGE = 2,
    WEATHER_TYPE = 3,
    WEATHER_PRECIPITATION = 4,
    EPreviewMode_MAX = 5,
};
#pragma pack(pop)
