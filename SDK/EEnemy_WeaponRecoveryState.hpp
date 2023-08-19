#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemy_WeaponRecoveryState {
    None = 0,
    WaitForActionToStart = 1,
    StartRecovery = 2,
    MoveToLocation = 3,
    PickupWeapon = 4,
    FinalizeRecovery = 5,
    Done = 6,
    EEnemy_MAX = 7,
};
#pragma pack(pop)
