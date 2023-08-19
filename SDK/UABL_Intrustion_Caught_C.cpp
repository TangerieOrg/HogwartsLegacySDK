#include "UABL_Intrustion_Caught_C.hpp"
#include "UAblAbility.hpp"
UABL_Intrustion_Caught_C* UABL_Intrustion_Caught_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Intrustion_Caught.ABL_Intrustion_Caught_C");
    return (UABL_Intrustion_Caught_C*)res;
}
