#include "UABL_WandCast_Stealth_C.hpp"
#include "UAblComboAbility.hpp"
UABL_WandCast_Stealth_C* UABL_WandCast_Stealth_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_Stealth.ABL_WandCast_Stealth_C");
    return (UABL_WandCast_Stealth_C*)res;
}
