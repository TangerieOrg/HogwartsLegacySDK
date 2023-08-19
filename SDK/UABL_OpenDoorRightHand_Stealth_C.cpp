#include "UABL_OpenDoorRightHand_Stealth_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorRightHand_Stealth_C* UABL_OpenDoorRightHand_Stealth_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorRightHand_Stealth.ABL_OpenDoorRightHand_Stealth_C");
    return (UABL_OpenDoorRightHand_Stealth_C*)res;
}
