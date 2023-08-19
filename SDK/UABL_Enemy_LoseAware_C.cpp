#include "UABL_Enemy_LoseAware_C.hpp"
#include "UAblAbility.hpp"
UABL_Enemy_LoseAware_C* UABL_Enemy_LoseAware_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Aware/ABL_Enemy_LoseAware.ABL_Enemy_LoseAware_C");
    return (UABL_Enemy_LoseAware_C*)res;
}
