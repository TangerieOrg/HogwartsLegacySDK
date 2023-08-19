#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryDodgeStyle : uint8_t {
    RollAway = 0,
    RollPerpendicular = 1,
    RollTowards = 2,
    DodgeAway = 3,
    DodgePerpendicular = 4,
    DodgeTowards = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
