#include "UABL_Creature_StandingToWalk_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_StandingToWalk_C* UABL_Creature_StandingToWalk_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_StandingToWalk.ABL_Creature_StandingToWalk_C");
    return (UABL_Creature_StandingToWalk_C*)res;
}
