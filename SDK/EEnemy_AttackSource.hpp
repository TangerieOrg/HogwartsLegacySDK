#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackSource : uint8_t {
    Normal = 0,
    Split = 1,
    Counter = 2,
    EEnemy_MAX = 3,
};
#pragma pack(pop)
