#include "UABL_FlooPowder_Enter_C.hpp"
#include "UAblAbility.hpp"
UABL_FlooPowder_Enter_C* UABL_FlooPowder_Enter_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/FlooPowder/ABL_FlooPowder_Enter.ABL_FlooPowder_Enter_C");
    return (UABL_FlooPowder_Enter_C*)res;
}
