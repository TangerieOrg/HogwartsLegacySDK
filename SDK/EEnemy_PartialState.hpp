#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_PartialState {
    None = 0,
    WandActive = 1,
    ShieldActive = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
