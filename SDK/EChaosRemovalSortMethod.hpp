#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EChaosRemovalSortMethod : uint8_t {
    SortNone = 0,
    SortByHighestMass = 1,
    SortByNearestFirst = 2,
    Count = 3,
    EChaosRemovalSortMethod_MAX = 4,
};
#pragma pack(pop)
