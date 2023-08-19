#include "UABL_Strafe_Loop_C.hpp"
#include "UAblAbility.hpp"
UABL_Strafe_Loop_C* UABL_Strafe_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_Strafe_Loop.ABL_Strafe_Loop_C");
    return (UABL_Strafe_Loop_C*)res;
}
