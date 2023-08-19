#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyMovementState : uint8_t {
    Stop = 0,
    Walk = 1,
    Jog = 2,
    Gallop = 3,
    Num = 4,
    EEnemyMovementState_MAX = 5,
};
#pragma pack(pop)
