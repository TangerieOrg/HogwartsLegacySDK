#include "UABL_SwimDiveJump_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimDiveJump_C* UABL_SwimDiveJump_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimDiveJump.ABL_SwimDiveJump_C");
    return (UABL_SwimDiveJump_C*)res;
}
