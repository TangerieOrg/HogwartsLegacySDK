#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackApparateMode : uint8_t {
    None = 0,
    Target = 1,
    Player = 2,
    Self = 3,
    Location = 4,
    Custom = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
