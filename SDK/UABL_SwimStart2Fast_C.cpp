#include "UABL_SwimStart2Fast_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimStart2Fast_C* UABL_SwimStart2Fast_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimStart2Fast.ABL_SwimStart2Fast_C");
    return (UABL_SwimStart2Fast_C*)res;
}
