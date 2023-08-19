#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPerformTaskCombatMode : uint8_t {
    Normal = 0,
    Protector = 1,
    Custom = 2,
    DuelOpponent = 3,
    FightClubOpponent = 4,
    Aggressor = 5,
    GroupAggressor = 6,
    EPerformTaskCombatMode_MAX = 7,
};
#pragma pack(pop)
