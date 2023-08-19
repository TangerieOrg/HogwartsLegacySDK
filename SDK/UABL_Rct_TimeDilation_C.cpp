#include "UABL_Rct_TimeDilation_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Rct_TimeDilation_C* UABL_Rct_TimeDilation_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Rct_TimeDilation.ABL_Rct_TimeDilation_C");
    return (UABL_Rct_TimeDilation_C*)res;
}
