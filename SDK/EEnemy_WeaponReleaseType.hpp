#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_WeaponReleaseType : uint8_t {
    DisarmWeapon = 0,
    DisarmShield = 1,
    DropWeapon = 2,
    DropShield = 3,
    ThrowWeapon = 4,
    ThrowTransientWeapon = 5,
    DeathDisarmWeapon = 6,
    DisarmWeaponForRecovery = 7,
    EEnemy_MAX = 8,
};
#pragma pack(pop)
