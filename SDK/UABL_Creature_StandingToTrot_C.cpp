#include "UABL_Creature_StandingToTrot_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_StandingToTrot_C* UABL_Creature_StandingToTrot_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_StandingToTrot.ABL_Creature_StandingToTrot_C");
    return (UABL_Creature_StandingToTrot_C*)res;
}
