#include "UABL_NPCGameEventDarkMagicReact_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPCGameEventDarkMagicReact_C* UABL_NPCGameEventDarkMagicReact_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Reactions/GameEvents/ABL_NPCGameEventDarkMagicReact.ABL_NPCGameEventDarkMagicReact_C");
    return (UABL_NPCGameEventDarkMagicReact_C*)res;
}
