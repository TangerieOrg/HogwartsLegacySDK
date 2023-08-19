#include "UABL_Transform_LandFailed_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Transform_LandFailed_C* UABL_Transform_LandFailed_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Transform_LandFailed.ABL_Transform_LandFailed_C");
    return (UABL_Transform_LandFailed_C*)res;
}
