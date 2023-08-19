#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_MoveTurnTo {
    None = 0,
    MoveDir = 1,
    Target = 2,
    Weapon = 3,
    ENPC_MAX = 4,
};
#pragma pack(pop)
