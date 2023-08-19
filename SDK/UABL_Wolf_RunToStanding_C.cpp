#include "UABL_Wolf_RunToStanding_C.hpp"
#include "UAblAbility.hpp"
UABL_Wolf_RunToStanding_C* UABL_Wolf_RunToStanding_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Wolf/Abilities/Creature/ABL_Wolf_RunToStanding.ABL_Wolf_RunToStanding_C");
    return (UABL_Wolf_RunToStanding_C*)res;
}
