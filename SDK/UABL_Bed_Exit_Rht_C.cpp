#include "UABL_Bed_Exit_Rht_C.hpp"
#include "UAblAbility.hpp"
UABL_Bed_Exit_Rht_C* UABL_Bed_Exit_Rht_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Bed_Exit_Rht.ABL_Bed_Exit_Rht_C");
    return (UABL_Bed_Exit_Rht_C*)res;
}
