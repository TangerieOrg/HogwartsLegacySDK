#include "UABL_ProtegoParry_AOE_Slide_C.hpp"
#include "UAblAbility.hpp"
UABL_ProtegoParry_AOE_Slide_C* UABL_ProtegoParry_AOE_Slide_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Protego/ABL_ProtegoParry_AOE_Slide.ABL_ProtegoParry_AOE_Slide_C");
    return (UABL_ProtegoParry_AOE_Slide_C*)res;
}
