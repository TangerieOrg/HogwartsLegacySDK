#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECompassBaring {
    West_MinX = 0,
    East_MaxX = 1,
    North_MinY = 2,
    South_MaxY = 3,
    Max = 4,
};
#pragma pack(pop)
