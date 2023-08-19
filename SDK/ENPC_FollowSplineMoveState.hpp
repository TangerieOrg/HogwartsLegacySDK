#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_FollowSplineMoveState {
    Normal = 0,
    Scurry = 1,
    Volume = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
