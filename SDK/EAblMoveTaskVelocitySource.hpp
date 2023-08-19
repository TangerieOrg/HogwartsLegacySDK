#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblMoveTaskVelocitySource : uint8_t {
    Stratchpad = 0,
    Fall = 1,
    Custom = 2,
    Ballistic = 3,
    EAblMoveTaskVelocitySource_MAX = 4,
};
#pragma pack(pop)
