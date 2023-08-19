#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_LOSCheckType {
    None = 0,
    AttackLocToTarget = 1,
    EnemyToTarget = 2,
    ENPC_MAX = 3,
};
#pragma pack(pop)
