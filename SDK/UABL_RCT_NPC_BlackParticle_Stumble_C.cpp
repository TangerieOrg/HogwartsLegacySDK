#include "UABL_RCT_NPC_BlackParticle_Stumble_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_BlackParticle_Stumble_C* UABL_RCT_NPC_BlackParticle_Stumble_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_RCT_NPC_BlackParticle_Stumble.ABL_RCT_NPC_BlackParticle_Stumble_C");
    return (UABL_RCT_NPC_BlackParticle_Stumble_C*)res;
}
