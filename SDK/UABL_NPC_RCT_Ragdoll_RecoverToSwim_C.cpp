#include "UABL_NPC_RCT_Ragdoll_RecoverToSwim_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_Ragdoll_RecoverToSwim_C* UABL_NPC_RCT_Ragdoll_RecoverToSwim_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_Ragdoll_RecoverToSwim.ABL_NPC_RCT_Ragdoll_RecoverToSwim_C");
    return (UABL_NPC_RCT_Ragdoll_RecoverToSwim_C*)res;
}
