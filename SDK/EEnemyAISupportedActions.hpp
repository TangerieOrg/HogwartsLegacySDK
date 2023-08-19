#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAISupportedActions {
    React = 0,
    Spawn = 1,
    Attack = 2,
    BecomeAware = 3,
    LoseAware = 4,
    ActivateStoredWeapon = 5,
    StoreActiveWeapon = 6,
    PickupWeaponFloor = 7,
    PickupWeaponWall = 8,
    DodgeLeft = 9,
    DodgeRight = 10,
    Disappear = 11,
    Reappear = 12,
    Taunt = 13,
    FleeExit = 14,
    InvestigateAlert = 15,
    EEnemyAISupportedActions_MAX = 16,
};
#pragma pack(pop)
