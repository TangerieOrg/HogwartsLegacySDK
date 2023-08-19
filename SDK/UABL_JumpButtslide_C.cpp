#include "UABL_JumpButtslide_C.hpp"
#include "UAblAbility.hpp"
UABL_JumpButtslide_C* UABL_JumpButtslide_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_JumpButtslide.ABL_JumpButtslide_C");
    return (UABL_JumpButtslide_C*)res;
}
