#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGroundSwarmingEventType {
    FirstTargetHit = 0,
    TargetThresholdReached = 1,
    TimedOutMissedThreshold = 2,
    MarkForDeath = 3,
    EGroundSwarmingEventType_MAX = 4,
};
#pragma pack(pop)
