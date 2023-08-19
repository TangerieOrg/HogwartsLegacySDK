#include "UABL_NPC_RCT_BlackParticleExplodeNoDeath_InAir_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_BlackParticleExplodeNoDeath_InAir_C* UABL_NPC_RCT_BlackParticleExplodeNoDeath_InAir_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_NPC_RCT_BlackParticleExplodeNoDeath_InAir.ABL_NPC_RCT_BlackParticleExplodeNoDeath_InAir_C");
    return (UABL_NPC_RCT_BlackParticleExplodeNoDeath_InAir_C*)res;
}
