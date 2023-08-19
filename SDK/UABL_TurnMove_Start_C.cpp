#include "UABL_TurnMove_Start_C.hpp"
#include "UAblAbility.hpp"
UABL_TurnMove_Start_C* UABL_TurnMove_Start_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_TurnMove_Start.ABL_TurnMove_Start_C");
    return (UABL_TurnMove_Start_C*)res;
}
