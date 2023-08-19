#include "UABL_StealPickup_C.hpp"
#include "UAblAbility.hpp"
UABL_StealPickup_C* UABL_StealPickup_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Steal/ABL_StealPickup.ABL_StealPickup_C");
    return (UABL_StealPickup_C*)res;
}
