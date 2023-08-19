#include "UABL_NPC_RCT_TransformToChicken_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_TransformToChicken_C* UABL_NPC_RCT_TransformToChicken_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_TransformToChicken.ABL_NPC_RCT_TransformToChicken_C");
    return (UABL_NPC_RCT_TransformToChicken_C*)res;
}
