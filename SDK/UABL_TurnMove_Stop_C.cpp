#include "UABL_TurnMove_Stop_C.hpp"
#include "UAblAbility.hpp"
UABL_TurnMove_Stop_C* UABL_TurnMove_Stop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_TurnMove_Stop.ABL_TurnMove_Stop_C");
    return (UABL_TurnMove_Stop_C*)res;
}
