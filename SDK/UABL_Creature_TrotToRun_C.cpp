#include "UABL_Creature_TrotToRun_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_TrotToRun_C* UABL_Creature_TrotToRun_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_TrotToRun.ABL_Creature_TrotToRun_C");
    return (UABL_Creature_TrotToRun_C*)res;
}
