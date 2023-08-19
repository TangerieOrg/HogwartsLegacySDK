#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_FollowSplineDirection : uint8_t {
    Forward = 0,
    Reverse = 1,
    ENPC_MAX = 2,
};
#pragma pack(pop)
