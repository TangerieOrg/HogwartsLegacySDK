#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryType : uint8_t {
    None = 0,
    Melee = 1,
    Ranged = 2,
    Ballistic = 3,
    Animation = 4,
    Custom = 5,
    RunTo = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
