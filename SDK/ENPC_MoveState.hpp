#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_MoveState {
    Loop = 0,
    Start = 1,
    Stop = 2,
    LoopTurn = 3,
    FollowSpline = 4,
    TurnInPlace = 5,
    Pivot = 6,
    Count = 7,
    ENPC_MAX = 8,
};
#pragma pack(pop)
