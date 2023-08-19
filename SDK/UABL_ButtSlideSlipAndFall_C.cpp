#include "UABL_ButtSlideSlipAndFall_C.hpp"
#include "UAblAbility.hpp"
UABL_ButtSlideSlipAndFall_C* UABL_ButtSlideSlipAndFall_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/ButtSliding/ABL_ButtSlideSlipAndFall.ABL_ButtSlideSlipAndFall_C");
    return (UABL_ButtSlideSlipAndFall_C*)res;
}
