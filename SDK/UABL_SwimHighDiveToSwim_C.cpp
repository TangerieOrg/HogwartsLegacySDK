#include "UABL_SwimHighDiveToSwim_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimHighDiveToSwim_C* UABL_SwimHighDiveToSwim_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimHighDiveToSwim.ABL_SwimHighDiveToSwim_C");
    return (UABL_SwimHighDiveToSwim_C*)res;
}
