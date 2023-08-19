#include "UABL_Creature_Swim_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_Swim_C* UABL_Creature_Swim_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_Swim.ABL_Creature_Swim_C");
    return (UABL_Creature_Swim_C*)res;
}
