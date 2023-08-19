#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsExpulso.hpp"
UModFilter_DealDamage_Spell_IsExpulso* UModFilter_DealDamage_Spell_IsExpulso::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsExpulso");
    return (UModFilter_DealDamage_Spell_IsExpulso*)res;
}
