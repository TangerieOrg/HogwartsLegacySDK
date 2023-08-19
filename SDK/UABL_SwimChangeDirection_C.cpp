#include "UABL_SwimChangeDirection_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimChangeDirection_C* UABL_SwimChangeDirection_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimChangeDirection.ABL_SwimChangeDirection_C");
    return (UABL_SwimChangeDirection_C*)res;
}
