#include "UABL_Incarcerous_End_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Incarcerous_End_C* UABL_Incarcerous_End_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Incarcerous_End.ABL_Incarcerous_End_C");
    return (UABL_Incarcerous_End_C*)res;
}
