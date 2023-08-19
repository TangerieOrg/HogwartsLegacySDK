#include "UABL_NPCGameEventCringeReact_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPCGameEventCringeReact_C* UABL_NPCGameEventCringeReact_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Reactions/GameEvents/ABL_NPCGameEventCringeReact.ABL_NPCGameEventCringeReact_C");
    return (UABL_NPCGameEventCringeReact_C*)res;
}
