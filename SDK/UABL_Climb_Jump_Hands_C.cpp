#include "UABL_Climb_Jump_Hands_C.hpp"
#include "UAblAbility.hpp"
UABL_Climb_Jump_Hands_C* UABL_Climb_Jump_Hands_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Climbing/ABL_Climb_Jump_Hands.ABL_Climb_Jump_Hands_C");
    return (UABL_Climb_Jump_Hands_C*)res;
}
