#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackThreatState : uint8_t {
    None = 0,
    Inactive = 1,
    Active_Blockable = 2,
    Active_Unblockable = 3,
    PreAttack = 4,
    EEnemy_MAX = 5,
};
#pragma pack(pop)
