#include "UModFilter_OnHit_Base.hpp"
#include "UModFilter_OnHit_Spell_IsSpellNameAny.hpp"
UModFilter_OnHit_Spell_IsSpellNameAny* UModFilter_OnHit_Spell_IsSpellNameAny::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_OnHit_Spell_IsSpellNameAny");
    return (UModFilter_OnHit_Spell_IsSpellNameAny*)res;
}
