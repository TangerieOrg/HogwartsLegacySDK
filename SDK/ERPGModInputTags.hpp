#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERPGModInputTags : int32_t {
    XPLevel = 0,
    ItemEffectiveness = 1,
    OffenseStat = 2,
    DefenseStat = 3,
    CooldownStat = 4,
    StatDamageMultiplier = 5,
    StatDamageReduction = 6,
    StatCooldownReduction = 7,
    LastHealAmount = 8,
    PotionEffectCounter = 9,
    ComboFocusMultiplier = 10,
    NumTags = 11,
    ERPGModInputTags_MAX = 12,
};
#pragma pack(pop)
