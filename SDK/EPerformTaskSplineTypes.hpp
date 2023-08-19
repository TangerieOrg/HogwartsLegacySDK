#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerformTaskSplineTypes : uint8_t {
    SlowWalk = 0,
    Walk = 1,
    Jog = 2,
    EPerformTaskSplineTypes_MAX = 3,
};
#pragma pack(pop)
