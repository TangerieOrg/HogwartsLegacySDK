#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerlinNoiseOctaveMode : uint8_t {
    All = 0,
    Odd = 1,
    Even = 2,
    Thirds = 3,
    EPerlinNoiseOctaveMode_MAX = 4,
};
#pragma pack(pop)
