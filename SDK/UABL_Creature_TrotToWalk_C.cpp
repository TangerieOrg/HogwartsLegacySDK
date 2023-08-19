#include "UABL_Creature_TrotToWalk_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_TrotToWalk_C* UABL_Creature_TrotToWalk_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_TrotToWalk.ABL_Creature_TrotToWalk_C");
    return (UABL_Creature_TrotToWalk_C*)res;
}
