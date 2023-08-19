#pragma once
#include <cstdint>
#include "FExpHeightFogParameters.hpp"
#pragma pack(push, 1)
struct FFogParametersFinal {
    FExpHeightFogParameters Params; // 0x0
    bool bFollowCamera; // 0x1d8
    char pad_1d9[0x7];
}; // Size: 0x1e0
#pragma pack(pop)
