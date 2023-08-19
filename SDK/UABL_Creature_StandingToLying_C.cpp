#include "UABL_Creature_StandingToLying_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_StandingToLying_C* UABL_Creature_StandingToLying_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_StandingToLying.ABL_Creature_StandingToLying_C");
    return (UABL_Creature_StandingToLying_C*)res;
}
