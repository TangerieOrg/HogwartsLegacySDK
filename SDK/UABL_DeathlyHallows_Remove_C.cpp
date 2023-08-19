#include "UABL_DeathlyHallows_Remove_C.hpp"
#include "UAblAbility.hpp"
UABL_DeathlyHallows_Remove_C* UABL_DeathlyHallows_Remove_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/DeathlyHallows/ABL_DeathlyHallows_Remove.ABL_DeathlyHallows_Remove_C");
    return (UABL_DeathlyHallows_Remove_C*)res;
}
