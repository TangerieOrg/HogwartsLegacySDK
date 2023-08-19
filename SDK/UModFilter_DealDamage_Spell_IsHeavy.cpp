#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsHeavy.hpp"
UModFilter_DealDamage_Spell_IsHeavy* UModFilter_DealDamage_Spell_IsHeavy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsHeavy");
    return (UModFilter_DealDamage_Spell_IsHeavy*)res;
}
