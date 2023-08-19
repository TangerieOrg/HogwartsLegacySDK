#include "UABL_Sprint2Jog_C.hpp"
#include "UAblAbility.hpp"
UABL_Sprint2Jog_C* UABL_Sprint2Jog_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_Sprint2Jog.ABL_Sprint2Jog_C");
    return (UABL_Sprint2Jog_C*)res;
}
