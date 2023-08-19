#pragma once
#include <cstdint>
#include "ESpellCategory.hpp"
#include "FSpellUpgradeParameters.hpp"
#pragma pack(push, 1)
struct FSpellUpgradeState {
    FName SpellName; // 0x0
    ESpellCategory SpellCategory; // 0x8
    char pad_9[0x3];
    FName GroupName; // 0xc
    FName CurriculumAssociation; // 0x14
    FSpellUpgradeParameters SpellUpgradeParameters; // 0x1c
    char pad_7c[0x4];
    bool NurtureOnly; // 0x80
    bool AllowInUI; // 0x81
    char pad_82[0x2];
}; // Size: 0x84
#pragma pack(pop)
