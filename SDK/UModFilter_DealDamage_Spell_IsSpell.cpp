#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsSpell.hpp"
UModFilter_DealDamage_Spell_IsSpell* UModFilter_DealDamage_Spell_IsSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsSpell");
    return (UModFilter_DealDamage_Spell_IsSpell*)res;
}
