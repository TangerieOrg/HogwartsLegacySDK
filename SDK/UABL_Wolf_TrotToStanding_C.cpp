#include "UABL_Wolf_TrotToStanding_C.hpp"
#include "UAblAbility.hpp"
UABL_Wolf_TrotToStanding_C* UABL_Wolf_TrotToStanding_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Wolf/Abilities/Creature/ABL_Wolf_TrotToStanding.ABL_Wolf_TrotToStanding_C");
    return (UABL_Wolf_TrotToStanding_C*)res;
}
