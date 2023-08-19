#include "UABL_Creature_SittingToLying_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_SittingToLying_C* UABL_Creature_SittingToLying_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_SittingToLying.ABL_Creature_SittingToLying_C");
    return (UABL_Creature_SittingToLying_C*)res;
}
