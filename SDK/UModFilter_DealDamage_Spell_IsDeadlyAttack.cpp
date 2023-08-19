#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsDeadlyAttack.hpp"
UModFilter_DealDamage_Spell_IsDeadlyAttack* UModFilter_DealDamage_Spell_IsDeadlyAttack::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsDeadlyAttack");
    return (UModFilter_DealDamage_Spell_IsDeadlyAttack*)res;
}
