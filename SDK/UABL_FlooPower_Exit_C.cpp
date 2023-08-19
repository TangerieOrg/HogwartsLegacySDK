#include "UABL_FlooPower_Exit_C.hpp"
#include "UAblAbility.hpp"
UABL_FlooPower_Exit_C* UABL_FlooPower_Exit_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/FlooPowder/ABL_FlooPower_Exit.ABL_FlooPower_Exit_C");
    return (UABL_FlooPower_Exit_C*)res;
}
