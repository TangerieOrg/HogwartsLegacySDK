#include "UABL_ProtegoParry_AOE_C.hpp"
#include "UAblAbility.hpp"
UABL_ProtegoParry_AOE_C* UABL_ProtegoParry_AOE_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Protego/ABL_ProtegoParry_AOE.ABL_ProtegoParry_AOE_C");
    return (UABL_ProtegoParry_AOE_C*)res;
}
