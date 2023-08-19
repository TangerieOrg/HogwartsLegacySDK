#include "UABL_SwimExit_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimExit_C* UABL_SwimExit_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimExit.ABL_SwimExit_C");
    return (UABL_SwimExit_C*)res;
}
