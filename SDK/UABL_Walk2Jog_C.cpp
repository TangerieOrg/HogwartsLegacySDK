#include "UABL_Walk2Jog_C.hpp"
#include "UAblAbility.hpp"
UABL_Walk2Jog_C* UABL_Walk2Jog_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_Walk2Jog.ABL_Walk2Jog_C");
    return (UABL_Walk2Jog_C*)res;
}
