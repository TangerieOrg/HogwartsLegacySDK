#include "UABL_Jog2Walk_C.hpp"
#include "UAblAbility.hpp"
UABL_Jog2Walk_C* UABL_Jog2Walk_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_Jog2Walk.ABL_Jog2Walk_C");
    return (UABL_Jog2Walk_C*)res;
}
