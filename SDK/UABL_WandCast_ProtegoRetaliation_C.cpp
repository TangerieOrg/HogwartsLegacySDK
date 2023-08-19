#include "UABL_WandCast_ProtegoRetaliation_C.hpp"
#include "UAblComboAbility.hpp"
UABL_WandCast_ProtegoRetaliation_C* UABL_WandCast_ProtegoRetaliation_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_ProtegoRetaliation.ABL_WandCast_ProtegoRetaliation_C");
    return (UABL_WandCast_ProtegoRetaliation_C*)res;
}
