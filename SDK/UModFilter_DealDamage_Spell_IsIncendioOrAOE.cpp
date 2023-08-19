#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsIncendioOrAOE.hpp"
UModFilter_DealDamage_Spell_IsIncendioOrAOE* UModFilter_DealDamage_Spell_IsIncendioOrAOE::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsIncendioOrAOE");
    return (UModFilter_DealDamage_Spell_IsIncendioOrAOE*)res;
}
