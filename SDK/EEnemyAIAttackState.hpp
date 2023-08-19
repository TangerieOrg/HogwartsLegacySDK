#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAIAttackState : uint8_t {
    None = 0,
    Attack = 1,
    Pressure = 2,
    Withdraw = 3,
    StayPut = 4,
    CloseDistance = 5,
    Cover = 6,
    SeekWeapon = 7,
    Evade = 8,
    Follow = 9,
    InOut = 10,
    Reposition = 11,
    SeekTarget = 12,
    BackOnNav = 13,
    LeadPlayer = 14,
    TooClose = 15,
    SwimToShore = 16,
    Standby = 17,
    Duel = 18,
    TooCloseTeammate = 19,
    Companion = 20,
    Count = 21,
    EEnemyAIAttackState_MAX = 22,
};
#pragma pack(pop)
