#include "UABL_CombatIdle_C.hpp"
#include "UAblAbility.hpp"
UABL_CombatIdle_C* UABL_CombatIdle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_CombatIdle.ABL_CombatIdle_C");
    return (UABL_CombatIdle_C*)res;
}
