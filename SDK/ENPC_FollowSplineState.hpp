#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_FollowSplineState {
    None = 0,
    Inactive = 1,
    Spline = 2,
    Idle = 3,
    Volume = 4,
    ENPC_MAX = 5,
};
#pragma pack(pop)
