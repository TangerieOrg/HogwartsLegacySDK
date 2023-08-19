#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERawCurveTrackTypes {
    RCT_Float = 0,
    RCT_Vector = 1,
    RCT_Transform = 2,
    RCT_MAX = 3,
};
#pragma pack(pop)
