#pragma once
#include <cstdint>
#include "EEnemy_AttackUpdateState.hpp"
#pragma pack(push, 1)
struct FEnemy_NextMoveWait {
    EEnemy_AttackUpdateState State; // 0x0
    char pad_1[0x3];
    float Time; // 0x4
}; // Size: 0x8
#pragma pack(pop)
