#include "UABL_SwimDiveToSwim_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimDiveToSwim_C* UABL_SwimDiveToSwim_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimDiveToSwim.ABL_SwimDiveToSwim_C");
    return (UABL_SwimDiveToSwim_C*)res;
}
