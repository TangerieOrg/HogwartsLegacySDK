#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_Event {
    None = 0,
    TransientWeaponActivate = 1,
    TransientWeaponDeactivate = 2,
    TombProtectorMeteor_Choose = 3,
    TombProtectorMeteor_Break = 4,
    TombProtectorMeteor_Throw = 5,
    ENPC_MAX = 6,
};
#pragma pack(pop)
