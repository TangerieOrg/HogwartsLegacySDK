#include "UABL_NPC_RCT_FierySendNoDeath_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_FierySendNoDeath_C* UABL_NPC_RCT_FierySendNoDeath_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/FinisherReactions/FierySend/ABL_NPC_RCT_FierySendNoDeath.ABL_NPC_RCT_FierySendNoDeath_C");
    return (UABL_NPC_RCT_FierySendNoDeath_C*)res;
}
