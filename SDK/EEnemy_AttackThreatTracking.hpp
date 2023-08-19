#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackThreatTracking {
    None = 0,
    Windup = 1,
    Fired = 2,
    Parried = 3,
    ParriedFired = 4,
    EEnemy_MAX = 5,
};
#pragma pack(pop)
