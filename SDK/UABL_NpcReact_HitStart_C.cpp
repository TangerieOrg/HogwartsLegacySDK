#include "UABL_NpcReact_HitStart_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NpcReact_HitStart_C* UABL_NpcReact_HitStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_HitStart.ABL_NpcReact_HitStart_C");
    return (UABL_NpcReact_HitStart_C*)res;
}
