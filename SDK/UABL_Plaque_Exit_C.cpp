#include "UABL_Plaque_Exit_C.hpp"
#include "UAblAbility.hpp"
UABL_Plaque_Exit_C* UABL_Plaque_Exit_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Plaque_Exit.ABL_Plaque_Exit_C");
    return (UABL_Plaque_Exit_C*)res;
}
