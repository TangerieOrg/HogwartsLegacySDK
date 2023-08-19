#include "UABL_Creature_RunToWalk_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_RunToWalk_C* UABL_Creature_RunToWalk_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_RunToWalk.ABL_Creature_RunToWalk_C");
    return (UABL_Creature_RunToWalk_C*)res;
}
