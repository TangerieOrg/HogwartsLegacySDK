#include "UABL_Stealth_Strafe_TurnMove_Stop_C.hpp"
#include "UAblAbility.hpp"
UABL_Stealth_Strafe_TurnMove_Stop_C* UABL_Stealth_Strafe_TurnMove_Stop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Crouching/ABL_Stealth_Strafe_TurnMove_Stop.ABL_Stealth_Strafe_TurnMove_Stop_C");
    return (UABL_Stealth_Strafe_TurnMove_Stop_C*)res;
}
