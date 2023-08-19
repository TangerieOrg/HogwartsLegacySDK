#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblGaitSpeed : uint8_t {
    Stopped = 0,
    SlowWalk = 1,
    Walk = 2,
    Jog = 3,
    Sprint = 4,
    EAblGaitSpeed_MAX = 5,
};
#pragma pack(pop)
