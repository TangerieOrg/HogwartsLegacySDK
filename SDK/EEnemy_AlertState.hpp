#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_AlertState : uint8_t {
    None = 0,
    AlertStart = 1,
    Face = 2,
    Idle = 3,
    Move = 4,
    StoreWeapon = 5,
    LoseTarget = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
