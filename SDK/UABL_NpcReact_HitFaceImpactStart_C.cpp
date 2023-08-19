#include "UABL_NpcReact_HitFaceImpactStart_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NpcReact_HitFaceImpactStart_C* UABL_NpcReact_HitFaceImpactStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_HitFaceImpactStart.ABL_NpcReact_HitFaceImpactStart_C");
    return (UABL_NpcReact_HitFaceImpactStart_C*)res;
}
