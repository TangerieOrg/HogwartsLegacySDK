#include "UABL_NPC_RCT_StumbleDazed_StartLoop_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_StumbleDazed_StartLoop_C* UABL_NPC_RCT_StumbleDazed_StartLoop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_StumbleDazed_StartLoop.ABL_NPC_RCT_StumbleDazed_StartLoop_C");
    return (UABL_NPC_RCT_StumbleDazed_StartLoop_C*)res;
}
