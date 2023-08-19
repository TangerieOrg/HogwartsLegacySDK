#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyWeaponEquip : uint8_t {
    None = 0,
    Stored = 1,
    Hidden = 2,
    EEnemyWeaponEquip_MAX = 3,
};
#pragma pack(pop)
