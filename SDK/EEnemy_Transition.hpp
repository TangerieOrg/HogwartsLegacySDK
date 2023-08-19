#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_Transition {
    None = 0,
    LosingTarget = 1,
    StoreActiveWeapon = 2,
    Wander = 3,
    Stationary = 4,
    KilledTarget = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
