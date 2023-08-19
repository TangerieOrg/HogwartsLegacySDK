#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsSpellNameAny.hpp"
UModFilter_DealDamage_Spell_IsSpellNameAny* UModFilter_DealDamage_Spell_IsSpellNameAny::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsSpellNameAny");
    return (UModFilter_DealDamage_Spell_IsSpellNameAny*)res;
}
