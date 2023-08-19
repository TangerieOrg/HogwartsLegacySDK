#pragma once
#include <cstdint>
#include "FExpHeightFogParametersOverride.hpp"
#pragma pack(push, 1)
struct FFogParameters {
    FExpHeightFogParametersOverride Params; // 0x0
    bool bFollowCamera; // 0x1f8
    char pad_1f9[0x7];
}; // Size: 0x200
#pragma pack(pop)
