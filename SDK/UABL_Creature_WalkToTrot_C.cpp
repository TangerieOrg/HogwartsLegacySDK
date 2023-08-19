#include "UABL_Creature_WalkToTrot_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_WalkToTrot_C* UABL_Creature_WalkToTrot_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_WalkToTrot.ABL_Creature_WalkToTrot_C");
    return (UABL_Creature_WalkToTrot_C*)res;
}
