#include "UABL_WandCast_Revelio_C.hpp"
#include "UAblAbility.hpp"
UABL_WandCast_Revelio_C* UABL_WandCast_Revelio_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_Revelio.ABL_WandCast_Revelio_C");
    return (UABL_WandCast_Revelio_C*)res;
}
