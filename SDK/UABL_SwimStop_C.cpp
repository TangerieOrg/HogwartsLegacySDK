#include "UABL_SwimStop_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimStop_C* UABL_SwimStop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimStop.ABL_SwimStop_C");
    return (UABL_SwimStop_C*)res;
}
