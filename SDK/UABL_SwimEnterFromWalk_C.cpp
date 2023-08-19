#include "UABL_SwimEnterFromWalk_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimEnterFromWalk_C* UABL_SwimEnterFromWalk_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimEnterFromWalk.ABL_SwimEnterFromWalk_C");
    return (UABL_SwimEnterFromWalk_C*)res;
}
