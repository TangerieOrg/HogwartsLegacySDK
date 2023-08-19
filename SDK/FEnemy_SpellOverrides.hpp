#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class USpellToolRecord;
#pragma pack(push, 1)
struct FEnemy_SpellOverrides {
    FGameplayTagContainer RequiredTagContainer; // 0x0
    USpellToolRecord* OverrideSpellToolRecord; // 0x20
}; // Size: 0x28
#pragma pack(pop)
