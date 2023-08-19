#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_SecondaryCollisionResponse {
    None = 0,
    Attack = 1,
    PushAway = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
