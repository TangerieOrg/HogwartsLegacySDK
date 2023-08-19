#include "UABL_WandCast_Oppugno_C.hpp"
#include "UAblAbility.hpp"
UABL_WandCast_Oppugno_C* UABL_WandCast_Oppugno_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandCast_Oppugno.ABL_WandCast_Oppugno_C");
    return (UABL_WandCast_Oppugno_C*)res;
}
