#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FSpellCooldownAmendInfo {
    FName SpellName; // 0x0
    FName SpellGroup; // 0x8
    float CooldownTime; // 0x10
    float CooldownAmount; // 0x14
    float CooldownDelta; // 0x18
    bool bIsInCombat; // 0x1c
    char pad_1d[0x3];
}; // Size: 0x20
#pragma pack(pop)
