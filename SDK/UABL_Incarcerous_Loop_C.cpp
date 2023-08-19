#include "UABL_Incarcerous_Loop_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Incarcerous_Loop_C* UABL_Incarcerous_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Incarcerous_Loop.ABL_Incarcerous_Loop_C");
    return (UABL_Incarcerous_Loop_C*)res;
}
