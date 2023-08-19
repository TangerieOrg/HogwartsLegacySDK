#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerformTaskSpeedMode : uint8_t {
    Stopped = 0,
    SlowWalk = 1,
    Walk = 2,
    Jog = 3,
    MaxSpeedMode = 4,
    EPerformTaskSpeedMode_MAX = 5,
};
#pragma pack(pop)
