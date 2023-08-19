#include "UABL_SwimStart_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimStart_C* UABL_SwimStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimStart.ABL_SwimStart_C");
    return (UABL_SwimStart_C*)res;
}
