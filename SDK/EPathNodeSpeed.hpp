#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPathNodeSpeed : uint8_t {
    Stopped = 0,
    SlowWalk = 1,
    Walk = 2,
    Jog = 3,
    Sprint = 4,
    Custom = 5,
    EPathNodeSpeed_MAX = 6,
};
#pragma pack(pop)
