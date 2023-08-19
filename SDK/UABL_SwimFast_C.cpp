#include "UABL_SwimFast_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimFast_C* UABL_SwimFast_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimFast.ABL_SwimFast_C");
    return (UABL_SwimFast_C*)res;
}
