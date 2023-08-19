#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_LOSUserType {
    None = 0,
    EnemyToTarget = 1,
    AttackLocToTarget = 2,
    Shuffle = 3,
    Waypoint = 4,
    Retreat = 5,
    BackOnNav = 6,
    ENPC_MAX = 7,
};
#pragma pack(pop)
