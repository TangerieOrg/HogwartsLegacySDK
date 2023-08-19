#include "UABL_CombatIdleBreak_C.hpp"
#include "UAblAbility.hpp"
UABL_CombatIdleBreak_C* UABL_CombatIdleBreak_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_CombatIdleBreak.ABL_CombatIdleBreak_C");
    return (UABL_CombatIdleBreak_C*)res;
}
