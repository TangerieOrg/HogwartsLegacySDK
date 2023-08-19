#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECapturedFrameStat {
    Frame = 0,
    Game = 1,
    Render = 2,
    Gpu = 3,
    Cpu = 4,
    Count = 5,
    ECapturedFrameStat_MAX = 6,
};
#pragma pack(pop)
