#include "UABL_DuelMoveBackward_C.hpp"
#include "UAblAbility.hpp"
UABL_DuelMoveBackward_C* UABL_DuelMoveBackward_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_DuelMoveBackward.ABL_DuelMoveBackward_C");
    return (UABL_DuelMoveBackward_C*)res;
}
