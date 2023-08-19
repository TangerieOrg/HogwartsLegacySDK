#include "UABL_Creature_Foraging_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_Foraging_C* UABL_Creature_Foraging_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_Foraging.ABL_Creature_Foraging_C");
    return (UABL_Creature_Foraging_C*)res;
}
