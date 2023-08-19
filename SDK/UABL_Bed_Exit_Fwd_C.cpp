#include "UABL_Bed_Exit_Fwd_C.hpp"
#include "UAblAbility.hpp"
UABL_Bed_Exit_Fwd_C* UABL_Bed_Exit_Fwd_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Bed_Exit_Fwd.ABL_Bed_Exit_Fwd_C");
    return (UABL_Bed_Exit_Fwd_C*)res;
}
