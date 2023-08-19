#pragma once
#include <cstdint>
#include "UModFilter_OnHit_Base.hpp"
#pragma pack(push, 1)
class UModFilter_OnHit_Spell_IsSpellNameAny : public UModFilter_OnHit_Base {
public:
    TArray<FName> SpellNames; // 0x30
    static UModFilter_OnHit_Spell_IsSpellNameAny* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
