#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryMunitionType : uint8_t {
    None = 0,
    Weapon = 1,
    Spell = 2,
    Ballistic = 3,
    Melee = 4,
    Custom = 5,
    External = 6,
    RunTo = 7,
    EEnemy_MAX = 8,
};
#pragma pack(pop)
