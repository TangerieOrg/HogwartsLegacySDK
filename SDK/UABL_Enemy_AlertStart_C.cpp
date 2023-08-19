#include "UABL_Enemy_AlertStart_C.hpp"
#include "UAblAbility.hpp"
UABL_Enemy_AlertStart_C* UABL_Enemy_AlertStart_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Aware/ABL_Enemy_AlertStart.ABL_Enemy_AlertStart_C");
    return (UABL_Enemy_AlertStart_C*)res;
}
