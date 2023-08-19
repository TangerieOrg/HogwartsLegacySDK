#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackResetSource : uint8_t {
    Normal = 0,
    AttackSplit = 1,
    EEnemy_MAX = 2,
};
#pragma pack(pop)
