#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsDada.hpp"
UModFilter_DealDamage_Spell_IsDada* UModFilter_DealDamage_Spell_IsDada::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsDada");
    return (UModFilter_DealDamage_Spell_IsDada*)res;
}
