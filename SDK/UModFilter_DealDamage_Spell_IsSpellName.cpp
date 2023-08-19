#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsSpellName.hpp"
UModFilter_DealDamage_Spell_IsSpellName* UModFilter_DealDamage_Spell_IsSpellName::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsSpellName");
    return (UModFilter_DealDamage_Spell_IsSpellName*)res;
}
