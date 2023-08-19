#include "UABL_Levitated_LandFailed_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Levitated_LandFailed_C* UABL_Levitated_LandFailed_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Levitated_LandFailed.ABL_Levitated_LandFailed_C");
    return (UABL_Levitated_LandFailed_C*)res;
}
