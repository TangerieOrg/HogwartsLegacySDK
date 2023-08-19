#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsDark.hpp"
UModFilter_DealDamage_Spell_IsDark* UModFilter_DealDamage_Spell_IsDark::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsDark");
    return (UModFilter_DealDamage_Spell_IsDark*)res;
}
