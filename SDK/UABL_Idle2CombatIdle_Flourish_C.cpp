#include "UABL_Idle2CombatIdle_Flourish_C.hpp"
#include "UAblAbility.hpp"
UABL_Idle2CombatIdle_Flourish_C* UABL_Idle2CombatIdle_Flourish_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_Idle2CombatIdle_Flourish.ABL_Idle2CombatIdle_Flourish_C");
    return (UABL_Idle2CombatIdle_Flourish_C*)res;
}
