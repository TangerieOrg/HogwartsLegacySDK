#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryWindowState {
    None = 0,
    PreStart = 1,
    Active = 2,
    Parry = 3,
    Fired = 4,
    Aborted = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
