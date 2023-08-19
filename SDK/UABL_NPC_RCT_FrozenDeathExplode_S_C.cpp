#include "UABL_NPC_RCT_FrozenDeathExplode_S_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_FrozenDeathExplode_S_C* UABL_NPC_RCT_FrozenDeathExplode_S_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Reactions/Deaths/ABL_NPC_RCT_FrozenDeathExplode_S.ABL_NPC_RCT_FrozenDeathExplode_S_C");
    return (UABL_NPC_RCT_FrozenDeathExplode_S_C*)res;
}
