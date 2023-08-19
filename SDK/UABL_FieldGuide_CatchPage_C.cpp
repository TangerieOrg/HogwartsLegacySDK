#include "UABL_FieldGuide_CatchPage_C.hpp"
#include "UAblAbility.hpp"
UABL_FieldGuide_CatchPage_C* UABL_FieldGuide_CatchPage_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/FieldGuide/ABL_FieldGuide_CatchPage.ABL_FieldGuide_CatchPage_C");
    return (UABL_FieldGuide_CatchPage_C*)res;
}
