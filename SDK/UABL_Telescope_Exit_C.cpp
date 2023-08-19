#include "UABL_Telescope_Exit_C.hpp"
#include "UAblAbility.hpp"
UABL_Telescope_Exit_C* UABL_Telescope_Exit_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Telescope/ABL_Telescope_Exit.ABL_Telescope_Exit_C");
    return (UABL_Telescope_Exit_C*)res;
}
