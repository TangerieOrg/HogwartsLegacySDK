#include "UABL_RCT_NPC_LightningBoltGroundedNoDeath_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_LightningBoltGroundedNoDeath_C* UABL_RCT_NPC_LightningBoltGroundedNoDeath_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/LightningBolt/ABL_RCT_NPC_LightningBoltGroundedNoDeath.ABL_RCT_NPC_LightningBoltGroundedNoDeath_C");
    return (UABL_RCT_NPC_LightningBoltGroundedNoDeath_C*)res;
}
