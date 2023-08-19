#include "UABL_SwimEnterIdle_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimEnterIdle_C* UABL_SwimEnterIdle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimEnterIdle.ABL_SwimEnterIdle_C");
    return (UABL_SwimEnterIdle_C*)res;
}
