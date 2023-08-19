#include "UABL_TicklePear_C.hpp"
#include "UAblAbility.hpp"
UABL_TicklePear_C* UABL_TicklePear_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Loot/ABL_TicklePear.ABL_TicklePear_C");
    return (UABL_TicklePear_C*)res;
}
