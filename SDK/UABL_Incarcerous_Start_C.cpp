#include "UABL_Incarcerous_Start_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Incarcerous_Start_C* UABL_Incarcerous_Start_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Incarcerous_Start.ABL_Incarcerous_Start_C");
    return (UABL_Incarcerous_Start_C*)res;
}
