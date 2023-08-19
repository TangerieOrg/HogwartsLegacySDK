#include "UABL_StealLoop_C.hpp"
#include "UAblAbility.hpp"
UABL_StealLoop_C* UABL_StealLoop_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Steal/ABL_StealLoop.ABL_StealLoop_C");
    return (UABL_StealLoop_C*)res;
}
