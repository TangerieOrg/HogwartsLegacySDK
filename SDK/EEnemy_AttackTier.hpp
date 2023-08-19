#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackTier : uint8_t {
    High = 0,
    Med = 1,
    Low = 2,
    None = 3,
    EEnemy_MAX = 4,
};
#pragma pack(pop)
