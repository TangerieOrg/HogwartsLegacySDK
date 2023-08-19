#include "UABL_Sprint2Walk_C.hpp"
#include "UAblAbility.hpp"
UABL_Sprint2Walk_C* UABL_Sprint2Walk_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_Sprint2Walk.ABL_Sprint2Walk_C");
    return (UABL_Sprint2Walk_C*)res;
}
