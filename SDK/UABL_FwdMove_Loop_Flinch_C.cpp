#include "UABL_FwdMove_Loop_Flinch_C.hpp"
#include "UAblAbility.hpp"
UABL_FwdMove_Loop_Flinch_C* UABL_FwdMove_Loop_Flinch_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_FwdMove_Loop_Flinch.ABL_FwdMove_Loop_Flinch_C");
    return (UABL_FwdMove_Loop_Flinch_C*)res;
}
