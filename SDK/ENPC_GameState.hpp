#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_GameState : uint8_t {
    None = 0,
    Wander = 1,
    Attack = 2,
    FollowPath = 3,
    Flee = 4,
    ScheduledEntity = 5,
    Alert = 6,
    FollowPlayer = 7,
    Close = 8,
    RunTo = 9,
    Retreat = 10,
    RetreatSplit = 11,
    FollowSpline = 12,
    ENPC_MAX = 13,
};
#pragma pack(pop)
