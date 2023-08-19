#include "UABL_DuelCombatIdle_C.hpp"
#include "UAblAbility.hpp"
UABL_DuelCombatIdle_C* UABL_DuelCombatIdle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_DuelCombatIdle.ABL_DuelCombatIdle_C");
    return (UABL_DuelCombatIdle_C*)res;
}
