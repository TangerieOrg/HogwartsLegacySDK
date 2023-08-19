#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class Enemy_TASTargetState {
    TrackingTarget = 0,
    TrackingPlayer = 1,
    LosingPlayer = 2,
    NotTracking = 3,
    Enemy_MAX = 4,
};
#pragma pack(pop)
