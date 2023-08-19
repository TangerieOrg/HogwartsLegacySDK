#include "UABL_RCT_DGBG_Getup_BellyUp_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_DGBG_Getup_BellyUp_C* UABL_RCT_DGBG_Getup_BellyUp_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_Getup_BellyUp.ABL_RCT_DGBG_Getup_BellyUp_C");
    return (UABL_RCT_DGBG_Getup_BellyUp_C*)res;
}
