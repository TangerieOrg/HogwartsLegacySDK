#include "UABL_SpellImpact_Accio_C.hpp"
#include "UAblAbility.hpp"
UABL_SpellImpact_Accio_C* UABL_SpellImpact_Accio_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_SpellImpact_Accio.ABL_SpellImpact_Accio_C");
    return (UABL_SpellImpact_Accio_C*)res;
}
