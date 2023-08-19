#include "UABL_FieldGuide_Receive_C.hpp"
#include "UAblAbility.hpp"
UABL_FieldGuide_Receive_C* UABL_FieldGuide_Receive_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/FieldGuide/ABL_FieldGuide_Receive.ABL_FieldGuide_Receive_C");
    return (UABL_FieldGuide_Receive_C*)res;
}
