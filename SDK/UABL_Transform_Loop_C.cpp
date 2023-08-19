#include "UABL_Transform_Loop_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Transform_Loop_C* UABL_Transform_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Transform_Loop.ABL_Transform_Loop_C");
    return (UABL_Transform_Loop_C*)res;
}
