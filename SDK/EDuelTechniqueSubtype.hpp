#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDuelTechniqueSubtype {
    Damage = 0,
    Reaction = 1,
    Depulso = 2,
    TimedEncounter = 3,
    Combo = 4,
    CustomEvent = 5,
    KillAllEnemies = 6,
    Deflect = 7,
    Oppugno = 8,
    SpellEffect = 9,
    TimedJuggle = 10,
    ComboCount = 11,
    SpellEffectMultiple = 12,
    ImperiusKill = 13,
    NoHealthItem = 14,
    EDuelTechniqueSubtype_MAX = 15,
};
#pragma pack(pop)
