#include "UABL_Transition_Mission_C.hpp"
#include "UAblAbility.hpp"
UABL_Transition_Mission_C* UABL_Transition_Mission_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Transition_Mission.ABL_Transition_Mission_C");
    return (UABL_Transition_Mission_C*)res;
}
