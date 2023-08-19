#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AttackingState : uint8_t {
    None = 0,
    Init = 1,
    Move = 2,
    Execute = 3,
    Reset = 4,
    Finished = 5,
    EEnemy_MAX = 6,
};
#pragma pack(pop)
