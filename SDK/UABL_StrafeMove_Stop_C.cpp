#include "UABL_StrafeMove_Stop_C.hpp"
#include "UAblAbility.hpp"
UABL_StrafeMove_Stop_C* UABL_StrafeMove_Stop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_StrafeMove_Stop.ABL_StrafeMove_Stop_C");
    return (UABL_StrafeMove_Stop_C*)res;
}
