#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENPC_AlertPointOfInterest {
    None = 0,
    Target = 1,
    TeammateTarget = 2,
    TeammateDeath = 3,
    TeammateDamage = 4,
    Sound = 5,
    TeammateDead = 6,
    Distraction = 7,
    CombatPlant = 8,
    ENPC_MAX = 9,
};
#pragma pack(pop)
