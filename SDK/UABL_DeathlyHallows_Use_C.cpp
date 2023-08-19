#include "UABL_DeathlyHallows_Use_C.hpp"
#include "UAblAbility.hpp"
UABL_DeathlyHallows_Use_C* UABL_DeathlyHallows_Use_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/DeathlyHallows/ABL_DeathlyHallows_Use.ABL_DeathlyHallows_Use_C");
    return (UABL_DeathlyHallows_Use_C*)res;
}
