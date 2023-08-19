#include "UABL_SwimIdle_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimIdle_C* UABL_SwimIdle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimIdle.ABL_SwimIdle_C");
    return (UABL_SwimIdle_C*)res;
}
