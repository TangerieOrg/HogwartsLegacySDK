#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsFinisher.hpp"
UModFilter_DealDamage_Spell_IsFinisher* UModFilter_DealDamage_Spell_IsFinisher::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsFinisher");
    return (UModFilter_DealDamage_Spell_IsFinisher*)res;
}
