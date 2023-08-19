#include "UABL_Partial_BreakoutFail_C.hpp"
#include "UAblAbility.hpp"
UABL_Partial_BreakoutFail_C* UABL_Partial_BreakoutFail_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/PartialCasting/ABL_Partial_BreakoutFail.ABL_Partial_BreakoutFail_C");
    return (UABL_Partial_BreakoutFail_C*)res;
}
