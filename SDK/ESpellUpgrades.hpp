#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESpellUpgrades : uint8_t {
    UpgradedMechanic = 0,
    Maxima = 1,
    IncrementLimitedCount = 2,
    AffectCharacters = 3,
    Unblockable = 4,
    BreakBlockUnaware = 5,
    BreakBlockPygmyPerk = 6,
    Curse = 7,
    WeakenNonLiftable = 8,
    Popup = 9,
    Projectiles = 10,
    IncreasedCharacterDuration = 11,
    AOE = 12,
    PerfectProtegoUnblockable = 13,
    ProtegoAOE = 14,
    ProtegoDamage = 15,
    ProtegoFocusGain = 16,
    CrucioHeals = 17,
    ImperiusAllyDamage = 18,
    BombardaCooldown = 19,
    ESpellUpgrades_MAX = 20,
};
#pragma pack(pop)
