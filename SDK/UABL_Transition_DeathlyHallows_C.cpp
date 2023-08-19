#include "UABL_Transition_DeathlyHallows_C.hpp"
#include "UAblAbility.hpp"
UABL_Transition_DeathlyHallows_C* UABL_Transition_DeathlyHallows_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Transition_DeathlyHallows.ABL_Transition_DeathlyHallows_C");
    return (UABL_Transition_DeathlyHallows_C*)res;
}
