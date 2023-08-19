#include "UABL_Telescope_Enter_C.hpp"
#include "UAblAbility.hpp"
UABL_Telescope_Enter_C* UABL_Telescope_Enter_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Telescope/ABL_Telescope_Enter.ABL_Telescope_Enter_C");
    return (UABL_Telescope_Enter_C*)res;
}
