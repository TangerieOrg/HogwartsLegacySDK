#include "UABL_OpenDoorLeftHand_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorLeftHand_C* UABL_OpenDoorLeftHand_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorLeftHand.ABL_OpenDoorLeftHand_C");
    return (UABL_OpenDoorLeftHand_C*)res;
}
