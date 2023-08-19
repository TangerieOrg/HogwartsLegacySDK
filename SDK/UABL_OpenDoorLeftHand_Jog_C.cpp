#include "UABL_OpenDoorLeftHand_Jog_C.hpp"
#include "UAblAbility.hpp"
UABL_OpenDoorLeftHand_Jog_C* UABL_OpenDoorLeftHand_Jog_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PartialBody/Doors/ABL_OpenDoorLeftHand_Jog.ABL_OpenDoorLeftHand_Jog_C");
    return (UABL_OpenDoorLeftHand_Jog_C*)res;
}
