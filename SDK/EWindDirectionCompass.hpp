#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindDirectionCompass : uint8_t {
    North = 0,
    NorthEast = 1,
    East = 2,
    SouthEast = 3,
    South = 4,
    SouthWest = 5,
    West = 6,
    NorthWest = 7,
    EWindDirectionCompass_MAX = 8,
};
#pragma pack(pop)
