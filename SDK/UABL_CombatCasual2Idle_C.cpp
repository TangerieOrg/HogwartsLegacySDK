#include "UABL_CombatCasual2Idle_C.hpp"
#include "UAblAbility.hpp"
UABL_CombatCasual2Idle_C* UABL_CombatCasual2Idle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_CombatCasual2Idle.ABL_CombatCasual2Idle_C");
    return (UABL_CombatCasual2Idle_C*)res;
}
