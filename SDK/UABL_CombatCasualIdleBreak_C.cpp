#include "UABL_CombatCasualIdleBreak_C.hpp"
#include "UAblAbility.hpp"
UABL_CombatCasualIdleBreak_C* UABL_CombatCasualIdleBreak_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_CombatCasualIdleBreak.ABL_CombatCasualIdleBreak_C");
    return (UABL_CombatCasualIdleBreak_C*)res;
}
