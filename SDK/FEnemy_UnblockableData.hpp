#pragma once
#include <cstdint>
#include "EEnemyShieldBreaker.hpp"
#pragma pack(push, 1)
struct FEnemy_UnblockableData {
    bool bUnblockableByPlayer; // 0x0
    EEnemyShieldBreaker UnblockableLByNPCLevel; // 0x1
}; // Size: 0x2
#pragma pack(pop)
