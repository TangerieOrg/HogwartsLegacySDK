#include "UABL_Creature_WalkToRun_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_WalkToRun_C* UABL_Creature_WalkToRun_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_WalkToRun.ABL_Creature_WalkToRun_C");
    return (UABL_Creature_WalkToRun_C*)res;
}
