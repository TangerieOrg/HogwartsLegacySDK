#include "UABL_NPC_RCT_BlackParticleExplodeNoDeath_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_BlackParticleExplodeNoDeath_C* UABL_NPC_RCT_BlackParticleExplodeNoDeath_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_NPC_RCT_BlackParticleExplodeNoDeath.ABL_NPC_RCT_BlackParticleExplodeNoDeath_C");
    return (UABL_NPC_RCT_BlackParticleExplodeNoDeath_C*)res;
}
