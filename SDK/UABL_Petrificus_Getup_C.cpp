#include "UABL_Petrificus_Getup_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Petrificus_Getup_C* UABL_Petrificus_Getup_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Petrificus_Getup.ABL_Petrificus_Getup_C");
    return (UABL_Petrificus_Getup_C*)res;
}
