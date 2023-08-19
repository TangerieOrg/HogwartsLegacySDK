#include "UABL_HitFreeze_Breakout_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_HitFreeze_Breakout_C* UABL_HitFreeze_Breakout_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_HitFreeze_Breakout.ABL_HitFreeze_Breakout_C");
    return (UABL_HitFreeze_Breakout_C*)res;
}
