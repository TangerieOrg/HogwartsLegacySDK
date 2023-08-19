#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsDueling.hpp"
UModFilter_DealDamage_Spell_IsDueling* UModFilter_DealDamage_Spell_IsDueling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsDueling");
    return (UModFilter_DealDamage_Spell_IsDueling*)res;
}
