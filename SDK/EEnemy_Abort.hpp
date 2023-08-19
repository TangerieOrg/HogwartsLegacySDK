#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_Abort {
    None = 0,
    AUS = 1,
    Move = 2,
    Idle = 3,
    MoveCollision = 4,
    MoveCorridor = 5,
    Count = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
