#include "UABL_NPCFinisherReact_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPCFinisherReact_C* UABL_NPCFinisherReact_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Reactions/Finisher/ABL_NPCFinisherReact.ABL_NPCFinisherReact_C");
    return (UABL_NPCFinisherReact_C*)res;
}
