#include "UABL_Transform_Breakout_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Transform_Breakout_C* UABL_Transform_Breakout_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Transform_Breakout.ABL_Transform_Breakout_C");
    return (UABL_Transform_Breakout_C*)res;
}
