#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AbilityChannelContext {
    HasWeapon = 0,
    HasShield = 1,
    Unaware = 2,
    Alert = 3,
    Attack = 4,
    IsBlind = 5,
    IsInjured = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
