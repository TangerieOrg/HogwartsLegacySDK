#include "UABL_Creature_WalkToStanding_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_WalkToStanding_C* UABL_Creature_WalkToStanding_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_WalkToStanding.ABL_Creature_WalkToStanding_C");
    return (UABL_Creature_WalkToStanding_C*)res;
}
