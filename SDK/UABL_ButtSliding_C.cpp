#include "UABL_ButtSliding_C.hpp"
#include "UAblAbility.hpp"
UABL_ButtSliding_C* UABL_ButtSliding_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/ButtSliding/ABL_ButtSliding.ABL_ButtSliding_C");
    return (UABL_ButtSliding_C*)res;
}
