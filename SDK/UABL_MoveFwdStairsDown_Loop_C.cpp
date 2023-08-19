#include "UABL_MoveFwdStairsDown_Loop_C.hpp"
#include "UAblAbility.hpp"
UABL_MoveFwdStairsDown_Loop_C* UABL_MoveFwdStairsDown_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_MoveFwdStairsDown_Loop.ABL_MoveFwdStairsDown_Loop_C");
    return (UABL_MoveFwdStairsDown_Loop_C*)res;
}
