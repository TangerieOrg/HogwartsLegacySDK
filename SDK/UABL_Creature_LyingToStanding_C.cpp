#include "UABL_Creature_LyingToStanding_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_LyingToStanding_C* UABL_Creature_LyingToStanding_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Transitions/ABL_Creature_LyingToStanding.ABL_Creature_LyingToStanding_C");
    return (UABL_Creature_LyingToStanding_C*)res;
}
