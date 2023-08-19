#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBehaviorState {
    Simulated = 0,
    Restarting = 1,
    Alive = 2,
    Reacting_MoveToStation = 3,
    Reacting_MoveToSpline = 4,
    Reacting = 5,
    Dormant = 6,
    Paused = 7,
    WalkToStation = 8,
    WalkToSpline = 9,
    RefreshSplineData = 10,
    Spawning = 11,
    Destroyed = 12,
    RenderShutdown = 13,
    FormGroup = 14,
    Transferred = 15,
    EBehaviorState_MAX = 16,
};
#pragma pack(pop)
