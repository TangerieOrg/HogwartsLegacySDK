#include "UABL_Creature_RunToTrot_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_RunToTrot_C* UABL_Creature_RunToTrot_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_RunToTrot.ABL_Creature_RunToTrot_C");
    return (UABL_Creature_RunToTrot_C*)res;
}
