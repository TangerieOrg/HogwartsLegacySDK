#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGameplayMechanics : uint8_t {
    Move = 0,
    Jump = 1,
    DodgeRoll = 2,
    Protego = 3,
    LightCast = 4,
    HeavyCast = 5,
    Revelio = 6,
    MapHelp = 7,
    ItemMenu = 8,
    AimMode = 9,
    Finishers = 10,
    Oppugno = 11,
    AutoTarget = 12,
    EGameplayMechanics_MAX = 13,
};
#pragma pack(pop)
