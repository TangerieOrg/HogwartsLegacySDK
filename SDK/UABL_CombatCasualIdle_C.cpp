#include "UABL_CombatCasualIdle_C.hpp"
#include "UAblAbility.hpp"
UABL_CombatCasualIdle_C* UABL_CombatCasualIdle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_CombatCasualIdle.ABL_CombatCasualIdle_C");
    return (UABL_CombatCasualIdle_C*)res;
}
