#include "UABL_Waving_C.hpp"
#include "UAblAbility.hpp"
UABL_Waving_C* UABL_Waving_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Waving/ABL_Waving.ABL_Waving_C");
    return (UABL_Waving_C*)res;
}
