#include "UABL_Petrificus_Loop_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Petrificus_Loop_C* UABL_Petrificus_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Petrificus_Loop.ABL_Petrificus_Loop_C");
    return (UABL_Petrificus_Loop_C*)res;
}
