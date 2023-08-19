#include "UABL_RCT_NPC_LightningBoltGrounded_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_LightningBoltGrounded_C* UABL_RCT_NPC_LightningBoltGrounded_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/LightningBolt/ABL_RCT_NPC_LightningBoltGrounded.ABL_RCT_NPC_LightningBoltGrounded_C");
    return (UABL_RCT_NPC_LightningBoltGrounded_C*)res;
}
