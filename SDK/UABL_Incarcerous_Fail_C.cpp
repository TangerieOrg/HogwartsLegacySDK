#include "UABL_Incarcerous_Fail_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Incarcerous_Fail_C* UABL_Incarcerous_Fail_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Incarcerous_Fail.ABL_Incarcerous_Fail_C");
    return (UABL_Incarcerous_Fail_C*)res;
}
