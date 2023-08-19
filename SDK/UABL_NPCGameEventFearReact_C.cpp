#include "UABL_NPCGameEventFearReact_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPCGameEventFearReact_C* UABL_NPCGameEventFearReact_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Reactions/GameEvents/ABL_NPCGameEventFearReact.ABL_NPCGameEventFearReact_C");
    return (UABL_NPCGameEventFearReact_C*)res;
}
