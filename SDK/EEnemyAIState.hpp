#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAIState : uint8_t {
    None = 0,
    Wander = 1,
    Attack = 2,
    FollowPath = 3,
    Stationary = 4,
    Dead = 5,
    Deprecated_Reacting = 6,
    DEPRECATED_Scared = 7,
    Flee = 8,
    FollowPlayer = 9,
    ScheduledEntity = 10,
    Sidekick = 11,
    OnFire = 12,
    Resurrecting = 13,
    FollowSpline = 14,
    Investigate = 15,
    EEnemyAIState_MAX = 16,
};
#pragma pack(pop)
