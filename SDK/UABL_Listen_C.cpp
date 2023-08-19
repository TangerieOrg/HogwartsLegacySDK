#include "UABL_Listen_C.hpp"
#include "UAblAbility.hpp"
UABL_Listen_C* UABL_Listen_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Listen/ABL_Listen.ABL_Listen_C");
    return (UABL_Listen_C*)res;
}
