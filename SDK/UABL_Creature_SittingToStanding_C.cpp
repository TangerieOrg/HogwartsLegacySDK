#include "UABL_Creature_SittingToStanding_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_SittingToStanding_C* UABL_Creature_SittingToStanding_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_SittingToStanding.ABL_Creature_SittingToStanding_C");
    return (UABL_Creature_SittingToStanding_C*)res;
}
