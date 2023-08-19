#include "UABL_SpellImpact_Accio_Casual_C.hpp"
#include "UAblAbility.hpp"
UABL_SpellImpact_Accio_Casual_C* UABL_SpellImpact_Accio_Casual_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_SpellImpact_Accio_Casual.ABL_SpellImpact_Accio_Casual_C");
    return (UABL_SpellImpact_Accio_Casual_C*)res;
}
