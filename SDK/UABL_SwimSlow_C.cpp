#include "UABL_SwimSlow_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimSlow_C* UABL_SwimSlow_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimSlow.ABL_SwimSlow_C");
    return (UABL_SwimSlow_C*)res;
}
