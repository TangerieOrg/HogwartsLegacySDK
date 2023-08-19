#include "UABL_Crouch_TurnMove_Stop_C.hpp"
#include "UAblAbility.hpp"
UABL_Crouch_TurnMove_Stop_C* UABL_Crouch_TurnMove_Stop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Crouching/ABL_Crouch_TurnMove_Stop.ABL_Crouch_TurnMove_Stop_C");
    return (UABL_Crouch_TurnMove_Stop_C*)res;
}
