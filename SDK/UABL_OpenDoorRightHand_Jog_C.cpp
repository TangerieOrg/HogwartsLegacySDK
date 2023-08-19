#include "UABL_OpenDoorRightHand_Jog_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorRightHand_Jog_C* UABL_OpenDoorRightHand_Jog_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorRightHand_Jog.ABL_OpenDoorRightHand_Jog_C");
    return (UABL_OpenDoorRightHand_Jog_C*)res;
}
