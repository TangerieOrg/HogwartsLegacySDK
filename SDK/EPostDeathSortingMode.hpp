#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostDeathSortingMode : uint8_t {
    FirstInFirstOut = 0,
    ClosestToPlayerFirst = 1,
    FarthestFromPlayerFirst = 2,
    None = 3,
    EPostDeathSortingMode_MAX = 4,
};
#pragma pack(pop)
