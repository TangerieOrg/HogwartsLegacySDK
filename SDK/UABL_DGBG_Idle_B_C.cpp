#include "UABL_DGBG_Idle_B_C.hpp"
#include "UAblAbility.hpp"
UABL_DGBG_Idle_B_C* UABL_DGBG_Idle_B_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_Idle_B.ABL_DGBG_Idle_B_C");
    return (UABL_DGBG_Idle_B_C*)res;
}
