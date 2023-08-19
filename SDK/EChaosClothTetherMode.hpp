#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EChaosClothTetherMode {
    FastTetherFastLength = 0,
    AccurateTetherFastLength = 1,
    AccurateTetherAccurateLength = 2,
    MaxChaosClothTetherMode = 3,
    EChaosClothTetherMode_MAX = 4,
};
#pragma pack(pop)
