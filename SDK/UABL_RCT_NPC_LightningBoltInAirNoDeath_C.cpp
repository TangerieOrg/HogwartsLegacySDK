#include "UABL_RCT_NPC_LightningBoltInAirNoDeath_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_LightningBoltInAirNoDeath_C* UABL_RCT_NPC_LightningBoltInAirNoDeath_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/LightningBolt/ABL_RCT_NPC_LightningBoltInAirNoDeath.ABL_RCT_NPC_LightningBoltInAirNoDeath_C");
    return (UABL_RCT_NPC_LightningBoltInAirNoDeath_C*)res;
}
