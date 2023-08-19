#include "UABL_Creature_SleepingToLying_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_SleepingToLying_C* UABL_Creature_SleepingToLying_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_SleepingToLying.ABL_Creature_SleepingToLying_C");
    return (UABL_Creature_SleepingToLying_C*)res;
}
