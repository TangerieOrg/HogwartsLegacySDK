#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_LimitAttackOnTarget : uint8_t {
    None = 0,
    AttackStart = 1,
    WindowStart = 2,
    ReleaseStart = 3,
    RunToStart = 4,
    EEnemy_MAX = 5,
};
#pragma pack(pop)
