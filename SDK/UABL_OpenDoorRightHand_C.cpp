#include "UABL_OpenDoorRightHand_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorRightHand_C* UABL_OpenDoorRightHand_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorRightHand.ABL_OpenDoorRightHand_C");
    return (UABL_OpenDoorRightHand_C*)res;
}
