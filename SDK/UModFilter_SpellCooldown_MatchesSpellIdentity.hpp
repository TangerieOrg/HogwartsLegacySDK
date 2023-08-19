#pragma once
#include <cstdint>
#include "FSelectableName.hpp"
#include "UModFilter_SpellCooldown_Base.hpp"
#pragma pack(push, 1)
class UModFilter_SpellCooldown_MatchesSpellIdentity : public UModFilter_SpellCooldown_Base {
public:
    FSelectableName SpellIdentity; // 0x30
    static UModFilter_SpellCooldown_MatchesSpellIdentity* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
