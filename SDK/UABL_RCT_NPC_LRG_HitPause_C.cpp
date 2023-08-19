#include "UABL_RCT_NPC_LRG_HitPause_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_LRG_HitPause_C* UABL_RCT_NPC_LRG_HitPause_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_RCT_NPC_LRG_HitPause.ABL_RCT_NPC_LRG_HitPause_C");
    return (UABL_RCT_NPC_LRG_HitPause_C*)res;
}
