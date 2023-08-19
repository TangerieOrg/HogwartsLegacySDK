#include "UABL_ClimbLadder_SlideLand_C.hpp"
#include "UAblAbility.hpp"
UABL_ClimbLadder_SlideLand_C* UABL_ClimbLadder_SlideLand_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/Jump/ABL_ClimbLadder_SlideLand.ABL_ClimbLadder_SlideLand_C");
    return (UABL_ClimbLadder_SlideLand_C*)res;
}
