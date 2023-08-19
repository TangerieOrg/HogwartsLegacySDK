#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_ParryButtonPressed : uint8_t {
    None = 0,
    Parry = 1,
    DodgeBlock = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
