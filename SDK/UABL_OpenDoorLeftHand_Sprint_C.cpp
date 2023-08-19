#include "UABL_OpenDoorLeftHand_Sprint_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorLeftHand_Sprint_C* UABL_OpenDoorLeftHand_Sprint_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorLeftHand_Sprint.ABL_OpenDoorLeftHand_Sprint_C");
    return (UABL_OpenDoorLeftHand_Sprint_C*)res;
}
