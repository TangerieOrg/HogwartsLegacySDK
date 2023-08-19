#include "UABL_DeathlyHallows_Acquire_C.hpp"
#include "UAblAbility.hpp"
UABL_DeathlyHallows_Acquire_C* UABL_DeathlyHallows_Acquire_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/DeathlyHallows/ABL_DeathlyHallows_Acquire.ABL_DeathlyHallows_Acquire_C");
    return (UABL_DeathlyHallows_Acquire_C*)res;
}
