#include "UABL_OpenDoorRightHand_Sprint_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorRightHand_Sprint_C* UABL_OpenDoorRightHand_Sprint_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorRightHand_Sprint.ABL_OpenDoorRightHand_Sprint_C");
    return (UABL_OpenDoorRightHand_Sprint_C*)res;
}
