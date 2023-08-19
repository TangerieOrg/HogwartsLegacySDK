#include "UABL_NpcReact_Hitch_S_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NpcReact_Hitch_S_C* UABL_NpcReact_Hitch_S_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_Hitch_S.ABL_NpcReact_Hitch_S_C");
    return (UABL_NpcReact_Hitch_S_C*)res;
}
