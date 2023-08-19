#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackChoiceSource {
    Normal = 0,
    Interrupt = 1,
    Split = 2,
    PreAttack = 3,
    EEnemy_MAX = 4,
};
#pragma pack(pop)
