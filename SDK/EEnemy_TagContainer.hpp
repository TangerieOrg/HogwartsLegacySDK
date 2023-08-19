#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_TagContainer : uint8_t {
    Shuffle = 0,
    Taunt = 1,
    Spawn = 2,
    IdleBreak = 3,
    Flourish = 4,
    None = 5,
    BecomeAware = 6,
    JumpSpline = 7,
    Count = 8,
    EEnemy_MAX = 9,
};
#pragma pack(pop)
