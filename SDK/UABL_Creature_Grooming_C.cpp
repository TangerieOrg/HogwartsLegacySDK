#include "UABL_Creature_Grooming_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_Grooming_C* UABL_Creature_Grooming_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_Grooming.ABL_Creature_Grooming_C");
    return (UABL_Creature_Grooming_C*)res;
}
