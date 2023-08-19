#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimationDirections : uint8_t {
    MovingDirection = 0,
    FacingDirection = 1,
    AimingDirection = 2,
    LookingDirection = 3,
    GazingDirection = 4,
    kDirectionCount = 5,
    EAnimationDirections_MAX = 6,
};
#pragma pack(pop)
