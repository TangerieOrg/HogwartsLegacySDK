#include "UABL_RCT_NPC_FiendFyre_Death_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_FiendFyre_Death_C* UABL_RCT_NPC_FiendFyre_Death_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/ABL_RCT_NPC_FiendFyre_Death.ABL_RCT_NPC_FiendFyre_Death_C");
    return (UABL_RCT_NPC_FiendFyre_Death_C*)res;
}
