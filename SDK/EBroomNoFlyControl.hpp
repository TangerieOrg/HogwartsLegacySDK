#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBroomNoFlyControl {
    NOFLY_Default = 0,
    NOFLY_PUSH = 1,
    NOFLY_180 = 2,
    NOFLY_TELEPORT = 3,
    NOFLY_SLOWDOWN = 4,
    NOFLY_HUG = 5,
    NOFLY_NONE = 6,
    NOFLY_COUNT = 7,
    NOFLY_MAX = 8,
};
#pragma pack(pop)
