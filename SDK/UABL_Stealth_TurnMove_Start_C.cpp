#include "UABL_Stealth_TurnMove_Start_C.hpp"
#include "UAblAbility.hpp"
UABL_Stealth_TurnMove_Start_C* UABL_Stealth_TurnMove_Start_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Crouching/ABL_Stealth_TurnMove_Start.ABL_Stealth_TurnMove_Start_C");
    return (UABL_Stealth_TurnMove_Start_C*)res;
}
