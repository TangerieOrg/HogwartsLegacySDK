#include "UABL_NpcReact_HitStart_Duel_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NpcReact_HitStart_Duel_C* UABL_NpcReact_HitStart_Duel_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_HitStart_Duel.ABL_NpcReact_HitStart_Duel_C");
    return (UABL_NpcReact_HitStart_Duel_C*)res;
}
