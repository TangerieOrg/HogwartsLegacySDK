#include "UABL_MoveFwdStairsUp_Loop_C.hpp"
#include "UAblAbility.hpp"
UABL_MoveFwdStairsUp_Loop_C* UABL_MoveFwdStairsUp_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_MoveFwdStairsUp_Loop.ABL_MoveFwdStairsUp_Loop_C");
    return (UABL_MoveFwdStairsUp_Loop_C*)res;
}
