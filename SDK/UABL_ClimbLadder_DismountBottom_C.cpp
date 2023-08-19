#include "UABL_ClimbLadder_DismountBottom_C.hpp"
#include "UAblAbility.hpp"
UABL_ClimbLadder_DismountBottom_C* UABL_ClimbLadder_DismountBottom_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_ClimbLadder_DismountBottom.ABL_ClimbLadder_DismountBottom_C");
    return (UABL_ClimbLadder_DismountBottom_C*)res;
}
