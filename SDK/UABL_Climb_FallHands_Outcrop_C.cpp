#include "UABL_Climb_FallHands_Outcrop_C.hpp"
#include "UAblAbility.hpp"
UABL_Climb_FallHands_Outcrop_C* UABL_Climb_FallHands_Outcrop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Climbing/ABL_Climb_FallHands_Outcrop.ABL_Climb_FallHands_Outcrop_C");
    return (UABL_Climb_FallHands_Outcrop_C*)res;
}
