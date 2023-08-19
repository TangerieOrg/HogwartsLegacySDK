#pragma once
#include <cstdint>
#include "UModFilter_DealDamage_Base.hpp"
#pragma pack(push, 1)
class UModFilter_DealDamage_Spell_IsSpellName : public UModFilter_DealDamage_Base {
public:
    FName SpellName; // 0x30
    static UModFilter_DealDamage_Spell_IsSpellName* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
