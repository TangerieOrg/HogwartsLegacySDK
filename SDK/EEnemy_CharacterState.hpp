#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_CharacterState : uint8_t {
    Wander = 0,
    Stationary = 1,
    StationaryUntilAware = 2,
    FollowPath = 3,
    StationaryUntilReleased = 4,
    FollowSpline = 5,
    None = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
