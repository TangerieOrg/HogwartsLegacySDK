#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_BuffType_DEPRECATED : uint8_t {
    None_DEPRECATED = 0,
    Health_DEPRECATED = 1,
    WeaponRespawn_DEPRECATED = 2,
    WeaponPowerup_DEPRECATED = 3,
    EEnemy_BuffType_MAX = 4,
};
#pragma pack(pop)
