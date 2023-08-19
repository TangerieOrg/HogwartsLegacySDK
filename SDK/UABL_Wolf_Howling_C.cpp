#include "UABL_Wolf_Howling_C.hpp"
#include "UAblAbility.hpp"
UABL_Wolf_Howling_C* UABL_Wolf_Howling_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Wolf/Abilities/Creature/ABL_Wolf_Howling.ABL_Wolf_Howling_C");
    return (UABL_Wolf_Howling_C*)res;
}
