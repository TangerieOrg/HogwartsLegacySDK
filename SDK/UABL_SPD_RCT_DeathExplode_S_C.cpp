#include "UABL_SPD_RCT_DeathExplode_S_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_SPD_RCT_DeathExplode_S_C* UABL_SPD_RCT_DeathExplode_S_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_DeathExplode_S.ABL_SPD_RCT_DeathExplode_S_C");
    return (UABL_SPD_RCT_DeathExplode_S_C*)res;
}
