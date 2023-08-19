#include "UABL_Stealth_WalkSlow_Loop_C.hpp"
#include "UAblAbility.hpp"
UABL_Stealth_WalkSlow_Loop_C* UABL_Stealth_WalkSlow_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_Stealth_WalkSlow_Loop.ABL_Stealth_WalkSlow_Loop_C");
    return (UABL_Stealth_WalkSlow_Loop_C*)res;
}
