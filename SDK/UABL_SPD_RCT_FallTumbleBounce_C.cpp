#include "UABL_SPD_RCT_FallTumbleBounce_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_SPD_RCT_FallTumbleBounce_C* UABL_SPD_RCT_FallTumbleBounce_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Reactions/ABL_SPD_RCT_FallTumbleBounce.ABL_SPD_RCT_FallTumbleBounce_C");
    return (UABL_SPD_RCT_FallTumbleBounce_C*)res;
}
