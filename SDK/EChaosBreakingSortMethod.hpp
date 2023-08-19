#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EChaosBreakingSortMethod : uint8_t {
    SortNone = 0,
    SortByHighestMass = 1,
    SortByHighestSpeed = 2,
    SortByNearestFirst = 3,
    Count = 4,
    EChaosBreakingSortMethod_MAX = 5,
};
#pragma pack(pop)
