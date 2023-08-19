#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_GameSubState : uint8_t {
    None = 0,
    Outside = 1,
    SwimToShore = 2,
    TooClose = 3,
    BackOnNav = 4,
    RecoverWeapon = 5,
    Investigate = 6,
    ENPC_MAX = 7,
};
#pragma pack(pop)
