#include "UABL_Creature_StandingToSitting_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_StandingToSitting_C* UABL_Creature_StandingToSitting_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_StandingToSitting.ABL_Creature_StandingToSitting_C");
    return (UABL_Creature_StandingToSitting_C*)res;
}
