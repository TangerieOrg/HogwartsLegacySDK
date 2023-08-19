#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackThreatType {
    None = 0,
    Melee = 1,
    Munition = 2,
    Weapon = 3,
    Ranged = 4,
    Buf = 5,
    Spawn = 6,
    Custom = 7,
    Ballistic = 8,
    RunTo = 9,
    EEnemy_MAX = 10,
};
#pragma pack(pop)
