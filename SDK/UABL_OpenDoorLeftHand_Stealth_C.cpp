#include "UABL_OpenDoorLeftHand_Stealth_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorLeftHand_Stealth_C* UABL_OpenDoorLeftHand_Stealth_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorLeftHand_Stealth.ABL_OpenDoorLeftHand_Stealth_C");
    return (UABL_OpenDoorLeftHand_Stealth_C*)res;
}
