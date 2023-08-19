#include "UABL_StealthKnockdown_C.hpp"
#include "UAblAbility.hpp"
UABL_StealthKnockdown_C* UABL_StealthKnockdown_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_StealthKnockdown.ABL_StealthKnockdown_C");
    return (UABL_StealthKnockdown_C*)res;
}
