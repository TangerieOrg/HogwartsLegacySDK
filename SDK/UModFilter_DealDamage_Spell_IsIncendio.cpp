#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Spell_IsIncendio.hpp"
UModFilter_DealDamage_Spell_IsIncendio* UModFilter_DealDamage_Spell_IsIncendio::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Spell_IsIncendio");
    return (UModFilter_DealDamage_Spell_IsIncendio*)res;
}
