#include "UABL_WandCast_LightCombo1_C.hpp"
#include "UAblComboAbility.hpp"
UABL_WandCast_LightCombo1_C* UABL_WandCast_LightCombo1_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_LightCombo1.ABL_WandCast_LightCombo1_C");
    return (UABL_WandCast_LightCombo1_C*)res;
}
