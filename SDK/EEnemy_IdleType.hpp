#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_IdleType {
    None = 0,
    Taunt = 1,
    Shuffle = 2,
    IdleBreak = 3,
    Idle = 4,
    Count = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
