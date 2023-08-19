#include "UABL_JogIn_C.hpp"
#include "UAblAbility.hpp"
UABL_JogIn_C* UABL_JogIn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_JogIn.ABL_JogIn_C");
    return (UABL_JogIn_C*)res;
}
