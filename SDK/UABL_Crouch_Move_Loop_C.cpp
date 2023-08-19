#include "UABL_Crouch_Move_Loop_C.hpp"
#include "UAblAbility.hpp"
UABL_Crouch_Move_Loop_C* UABL_Crouch_Move_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Crouching/ABL_Crouch_Move_Loop.ABL_Crouch_Move_Loop_C");
    return (UABL_Crouch_Move_Loop_C*)res;
}
