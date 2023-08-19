#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHerbGrowthState : uint8_t {
    None = 0,
    Growing = 1,
    Grown = 2,
    Harvested = 3,
    Regrowing = 4,
    EHerbGrowthState_MAX = 5,
};
#pragma pack(pop)
