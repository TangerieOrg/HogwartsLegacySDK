#include "UABL_ButtSlide_Recovery_C.hpp"
#include "UAblAbility.hpp"
UABL_ButtSlide_Recovery_C* UABL_ButtSlide_Recovery_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/ButtSliding/ABL_ButtSlide_Recovery.ABL_ButtSlide_Recovery_C");
    return (UABL_ButtSlide_Recovery_C*)res;
}
