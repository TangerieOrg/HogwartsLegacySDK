#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMounted_AIState {
    Stationary = 0,
    MovingToPathNode = 1,
    WaitingAtPathNode = 2,
    FinishWaitingAtPathNode = 3,
    MovingToSpline = 4,
    FollowingSpline = 5,
    EMounted_MAX = 6,
};
#pragma pack(pop)
