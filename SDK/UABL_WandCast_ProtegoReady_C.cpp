#include "UABL_WandCast_ProtegoReady_C.hpp"
#include "UAblComboAbility.hpp"
UABL_WandCast_ProtegoReady_C* UABL_WandCast_ProtegoReady_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_ProtegoReady.ABL_WandCast_ProtegoReady_C");
    return (UABL_WandCast_ProtegoReady_C*)res;
}
