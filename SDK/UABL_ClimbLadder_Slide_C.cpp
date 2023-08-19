#include "UABL_ClimbLadder_Slide_C.hpp"
#include "UAblAbility.hpp"
UABL_ClimbLadder_Slide_C* UABL_ClimbLadder_Slide_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_ClimbLadder_Slide.ABL_ClimbLadder_Slide_C");
    return (UABL_ClimbLadder_Slide_C*)res;
}
