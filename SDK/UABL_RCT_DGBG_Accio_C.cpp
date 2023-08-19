#include "UABL_RCT_DGBG_Accio_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_DGBG_Accio_C* UABL_RCT_DGBG_Accio_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_Accio.ABL_RCT_DGBG_Accio_C");
    return (UABL_RCT_DGBG_Accio_C*)res;
}
