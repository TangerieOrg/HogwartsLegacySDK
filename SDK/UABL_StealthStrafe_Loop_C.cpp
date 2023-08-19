#include "UABL_StealthStrafe_Loop_C.hpp"
#include "UAblAbility.hpp"
UABL_StealthStrafe_Loop_C* UABL_StealthStrafe_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_StealthStrafe_Loop.ABL_StealthStrafe_Loop_C");
    return (UABL_StealthStrafe_Loop_C*)res;
}
