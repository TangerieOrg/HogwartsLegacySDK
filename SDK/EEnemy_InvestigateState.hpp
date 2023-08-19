#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_InvestigateState {
    None = 0,
    Start = 1,
    Move = 2,
    Investigate = 3,
    Stop = 4,
    DrawWeapon = 5,
    Pause = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
