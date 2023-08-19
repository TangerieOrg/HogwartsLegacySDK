#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_FollowSplineEndAction : uint8_t {
    None = 0,
    Loop = 1,
    Bounce = 2,
    Done = 3,
    Die = 4,
    DoneNoReact = 5,
    Deactivate = 6,
    ENPC_MAX = 7,
};
#pragma pack(pop)
