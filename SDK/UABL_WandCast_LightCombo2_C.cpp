#include "UABL_WandCast_LightCombo2_C.hpp"
#include "UAblComboAbility.hpp"
UABL_WandCast_LightCombo2_C* UABL_WandCast_LightCombo2_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_LightCombo2.ABL_WandCast_LightCombo2_C");
    return (UABL_WandCast_LightCombo2_C*)res;
}
