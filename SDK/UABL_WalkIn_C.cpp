#include "UABL_WalkIn_C.hpp"
#include "UAblAbility.hpp"
UABL_WalkIn_C* UABL_WalkIn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_WalkIn.ABL_WalkIn_C");
    return (UABL_WalkIn_C*)res;
}
