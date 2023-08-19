#include "UABL_Transform_Start_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_Transform_Start_C* UABL_Transform_Start_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_Transform_Start.ABL_Transform_Start_C");
    return (UABL_Transform_Start_C*)res;
}
