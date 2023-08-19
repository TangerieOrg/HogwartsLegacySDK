#include "UABL_MoveFwd_Loop_C.hpp"
#include "UAblAbility.hpp"
UABL_MoveFwd_Loop_C* UABL_MoveFwd_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_MoveFwd_Loop.ABL_MoveFwd_Loop_C");
    return (UABL_MoveFwd_Loop_C*)res;
}
