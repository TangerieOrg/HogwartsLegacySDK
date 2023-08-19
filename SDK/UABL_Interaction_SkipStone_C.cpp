#include "UABL_Interaction_SkipStone_C.hpp"
#include "UAblAbility.hpp"
UABL_Interaction_SkipStone_C* UABL_Interaction_SkipStone_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Interactions/ABL_Interaction_SkipStone.ABL_Interaction_SkipStone_C");
    return (UABL_Interaction_SkipStone_C*)res;
}
