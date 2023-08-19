#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESeasonMask {
    None = 0,
    Fall = 1,
    Winter = 2,
    Spring = 4,
    Summer = 8,
    ESeasonMask_MAX = 9,
};
#pragma pack(pop)
