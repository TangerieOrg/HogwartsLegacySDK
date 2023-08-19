#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnvironmentalGlobalsColorVarConversion : uint8_t {
    RGBA = 0,
    RGBOneA = 1,
    RGBZeroA = 2,
    RGBTimesAOneA = 3,
    RGBTimesAZeroA = 4,
    RGBNormalizedOneA = 5,
    RGBNormalizedZeroA = 6,
    RGBNormalizedA = 7,
    RGBNormalizedIntA = 8,
    RGBGrayOneA = 9,
    RGBGrayZeroA = 10,
    RGBGrayA = 11,
    EEnvironmentalGlobalsColorVarConversion_MAX = 12,
};
#pragma pack(pop)
