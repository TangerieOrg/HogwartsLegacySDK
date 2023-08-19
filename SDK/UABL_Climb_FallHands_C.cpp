#include "UABL_Climb_FallHands_C.hpp"
#include "UAblAbility.hpp"
UABL_Climb_FallHands_C* UABL_Climb_FallHands_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Climbing/ABL_Climb_FallHands.ABL_Climb_FallHands_C");
    return (UABL_Climb_FallHands_C*)res;
}
