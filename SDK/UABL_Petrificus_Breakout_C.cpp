#include "UABL_Petrificus_Breakout_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Petrificus_Breakout_C* UABL_Petrificus_Breakout_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Petrificus_Breakout.ABL_Petrificus_Breakout_C");
    return (UABL_Petrificus_Breakout_C*)res;
}
