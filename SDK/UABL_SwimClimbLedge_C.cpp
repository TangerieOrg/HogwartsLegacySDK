#include "UABL_SwimClimbLedge_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimClimbLedge_C* UABL_SwimClimbLedge_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimClimbLedge.ABL_SwimClimbLedge_C");
    return (UABL_SwimClimbLedge_C*)res;
}
