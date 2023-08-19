#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EImpactTypes : uint8_t {
    None = 0,
    BroomFlight = 1,
    Default = 2,
    ExitWater = 3,
    Explosion = 4,
    Fire = 5,
    Flesh = 6,
    FloatingInWater = 7,
    Footfall = 8,
    Ice = 9,
    Lift = 10,
    Metal = 11,
    Slide = 12,
    SpellDefault = 13,
    SpellDamage = 14,
    SpellDamageLarge = 15,
    Stone = 16,
    Water = 17,
    Wood = 18,
    EImpactTypes_MAX = 19,
};
#pragma pack(pop)
