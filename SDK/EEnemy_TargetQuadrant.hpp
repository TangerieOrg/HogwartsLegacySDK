#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_TargetQuadrant {
    None = 0,
    LeftForward = 1,
    RightForward = 2,
    LeftBack = 3,
    RightBack = 4,
    Block = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
