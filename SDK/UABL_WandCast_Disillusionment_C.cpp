#include "UABL_WandCast_Disillusionment_C.hpp"
#include "UAblAbility.hpp"
UABL_WandCast_Disillusionment_C* UABL_WandCast_Disillusionment_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_Disillusionment.ABL_WandCast_Disillusionment_C");
    return (UABL_WandCast_Disillusionment_C*)res;
}
