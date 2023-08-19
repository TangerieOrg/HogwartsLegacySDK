#include "UABL_WandCast_LightFinisher3p_C.hpp"
#include "UAblComboAbility.hpp"
UABL_WandCast_LightFinisher3p_C* UABL_WandCast_LightFinisher3p_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_LightFinisher3p.ABL_WandCast_LightFinisher3p_C");
    return (UABL_WandCast_LightFinisher3p_C*)res;
}
