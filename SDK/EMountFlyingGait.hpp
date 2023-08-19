#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMountFlyingGait : uint8_t {
    Stop = 0,
    Hover = 1,
    Slow = 2,
    Fast = 3,
    Num = 4,
    EMountFlyingGait_MAX = 5,
};
#pragma pack(pop)
