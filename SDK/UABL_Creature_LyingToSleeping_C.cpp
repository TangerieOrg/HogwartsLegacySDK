#include "UABL_Creature_LyingToSleeping_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_LyingToSleeping_C* UABL_Creature_LyingToSleeping_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_LyingToSleeping.ABL_Creature_LyingToSleeping_C");
    return (UABL_Creature_LyingToSleeping_C*)res;
}
