#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackType : uint8_t {
    None = 0,
    Ranged = 1,
    Melee = 2,
    Buf = 3,
    Spawn = 4,
    Custom = 5,
    Ballistic = 6,
    RunTo = 7,
    EEnemy_MAX = 8,
};
#pragma pack(pop)
