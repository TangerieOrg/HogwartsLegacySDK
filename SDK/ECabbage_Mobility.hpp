#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECabbage_Mobility : uint8_t {
    Spawn = 0,
    Attack = 1,
    Bounce = 2,
    Idle = 3,
    Slide = 4,
    ECabbage_MAX = 5,
};
#pragma pack(pop)
