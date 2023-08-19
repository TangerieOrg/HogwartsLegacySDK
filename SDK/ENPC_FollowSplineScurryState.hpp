#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_FollowSplineScurryState : uint8_t {
    Interval = 0,
    Proximity = 1,
    ENPC_MAX = 2,
};
#pragma pack(pop)
