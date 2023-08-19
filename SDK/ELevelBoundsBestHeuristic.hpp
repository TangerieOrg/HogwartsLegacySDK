#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELevelBoundsBestHeuristic : uint8_t {
    SmallestVolume = 0,
    LargestVolume = 1,
    ClosestDistance = 2,
    FarthestDistance = 3,
    SmallestAreaXY = 4,
    LargestAreaXY = 5,
    First = 6,
    Oldest = 7,
    Youngest = 8,
    ELevelBoundsBestHeuristic_MAX = 9,
};
#pragma pack(pop)
