#include "UABL_StrafeMove_Pivot_C.hpp"
#include "UAblAbility.hpp"
UABL_StrafeMove_Pivot_C* UABL_StrafeMove_Pivot_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_StrafeMove_Pivot.ABL_StrafeMove_Pivot_C");
    return (UABL_StrafeMove_Pivot_C*)res;
}
