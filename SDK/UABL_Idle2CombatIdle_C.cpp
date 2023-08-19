#include "UABL_Idle2CombatIdle_C.hpp"
#include "UAblAbility.hpp"
UABL_Idle2CombatIdle_C* UABL_Idle2CombatIdle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_Idle2CombatIdle.ABL_Idle2CombatIdle_C");
    return (UABL_Idle2CombatIdle_C*)res;
}
