#include "UABL_CombatIdle_LF2RF_C.hpp"
#include "UAblAbility.hpp"
UABL_CombatIdle_LF2RF_C* UABL_CombatIdle_LF2RF_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_CombatIdle_LF2RF.ABL_CombatIdle_LF2RF_C");
    return (UABL_CombatIdle_LF2RF_C*)res;
}
