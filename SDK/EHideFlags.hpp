#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHideFlags {
    All = 0,
    All_Tier1 = 1,
    All_Tier3 = 2,
    SplineWalkers = 3,
    SeatFillers = 4,
    Creatures = 5,
    All_Tier4 = 6,
    Companions = 7,
    EHideFlags_MAX = 8,
};
#pragma pack(pop)
