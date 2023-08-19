#include "UABL_Creature_Intimidate_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_Intimidate_C* UABL_Creature_Intimidate_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_Intimidate.ABL_Creature_Intimidate_C");
    return (UABL_Creature_Intimidate_C*)res;
}
