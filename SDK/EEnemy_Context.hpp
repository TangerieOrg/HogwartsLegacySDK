#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_Context {
    HighHealth = 0,
    LowHealth = 1,
    SuccessfulAttack = 2,
    TargetDead = 3,
    LowEnergy = 4,
    TeammateSuccessfulAttack = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
