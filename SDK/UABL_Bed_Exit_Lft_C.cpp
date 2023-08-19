#include "UABL_Bed_Exit_Lft_C.hpp"
#include "UAblAbility.hpp"
UABL_Bed_Exit_Lft_C* UABL_Bed_Exit_Lft_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Bed_Exit_Lft.ABL_Bed_Exit_Lft_C");
    return (UABL_Bed_Exit_Lft_C*)res;
}
