#include "UABL_WandCast_Disillusionment_Exit_C.hpp"
#include "UAblAbility.hpp"
UABL_WandCast_Disillusionment_Exit_C* UABL_WandCast_Disillusionment_Exit_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_Disillusionment_Exit.ABL_WandCast_Disillusionment_Exit_C");
    return (UABL_WandCast_Disillusionment_Exit_C*)res;
}
