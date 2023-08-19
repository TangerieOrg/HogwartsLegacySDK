#include "UABL_WandCast_Casual_AccioPage_C.hpp"
#include "UAblComboAbility.hpp"
UABL_WandCast_Casual_AccioPage_C* UABL_WandCast_Casual_AccioPage_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_Casual_AccioPage.ABL_WandCast_Casual_AccioPage_C");
    return (UABL_WandCast_Casual_AccioPage_C*)res;
}
