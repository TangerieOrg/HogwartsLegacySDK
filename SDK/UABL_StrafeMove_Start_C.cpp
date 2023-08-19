#include "UABL_StrafeMove_Start_C.hpp"
#include "UAblAbility.hpp"
UABL_StrafeMove_Start_C* UABL_StrafeMove_Start_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_StrafeMove_Start.ABL_StrafeMove_Start_C");
    return (UABL_StrafeMove_Start_C*)res;
}
