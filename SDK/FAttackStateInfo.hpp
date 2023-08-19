#pragma once
#include <cstdint>
#include "EEnemy_AttackThreatState.hpp"
#pragma pack(push, 1)
struct FAttackStateInfo {
    bool bUnblockable; // 0x0
    EEnemy_AttackThreatState AttackThreatState; // 0x1
}; // Size: 0x2
#pragma pack(pop)
