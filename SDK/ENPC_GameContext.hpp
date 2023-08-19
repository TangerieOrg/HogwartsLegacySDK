#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_GameContext : uint8_t {
    None = 0,
    Swim = 1,
    OnSlope = 2,
    OnStairs = 3,
    Crouching = 4,
    Flying = 5,
    Stealth = 6,
    CCState = 7,
    KnockedDown = 8,
    Levitated = 9,
    ENPC_MAX = 10,
};
#pragma pack(pop)
