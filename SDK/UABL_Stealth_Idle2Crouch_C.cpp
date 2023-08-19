#include "UABL_Stealth_Idle2Crouch_C.hpp"
#include "UAblAbility.hpp"
UABL_Stealth_Idle2Crouch_C* UABL_Stealth_Idle2Crouch_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Crouching/ABL_Stealth_Idle2Crouch.ABL_Stealth_Idle2Crouch_C");
    return (UABL_Stealth_Idle2Crouch_C*)res;
}
