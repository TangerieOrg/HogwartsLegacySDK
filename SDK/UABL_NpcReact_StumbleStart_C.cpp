#include "UABL_NpcReact_StumbleStart_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NpcReact_StumbleStart_C* UABL_NpcReact_StumbleStart_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NpcReact_StumbleStart.ABL_NpcReact_StumbleStart_C");
    return (UABL_NpcReact_StumbleStart_C*)res;
}
