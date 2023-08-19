#include "UABL_SwimEnterMummyPose_C.hpp"
#include "UAblAbility.hpp"
UABL_SwimEnterMummyPose_C* UABL_SwimEnterMummyPose_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Swimming/ABL_SwimEnterMummyPose.ABL_SwimEnterMummyPose_C");
    return (UABL_SwimEnterMummyPose_C*)res;
}
