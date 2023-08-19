#include "UABL_TurnMove_Stop_Cautious_C.hpp"
#include "UAblAbility.hpp"
UABL_TurnMove_Stop_Cautious_C* UABL_TurnMove_Stop_Cautious_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_TurnMove_Stop_Cautious.ABL_TurnMove_Stop_Cautious_C");
    return (UABL_TurnMove_Stop_Cautious_C*)res;
}
