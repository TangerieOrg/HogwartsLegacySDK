#include "UABL_Crouch_TurnMove_Start_C.hpp"
#include "UAblAbility.hpp"
UABL_Crouch_TurnMove_Start_C* UABL_Crouch_TurnMove_Start_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Crouching/ABL_Crouch_TurnMove_Start.ABL_Crouch_TurnMove_Start_C");
    return (UABL_Crouch_TurnMove_Start_C*)res;
}
