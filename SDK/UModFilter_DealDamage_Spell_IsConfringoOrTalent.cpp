#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsConfringoOrTalent.hpp"
UModFilter_DealDamage_Spell_IsConfringoOrTalent* UModFilter_DealDamage_Spell_IsConfringoOrTalent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsConfringoOrTalent");
    return (UModFilter_DealDamage_Spell_IsConfringoOrTalent*)res;
}
