#include "UABL_Interaction_IdentificationStation_C.hpp"
#include "UAblAbility.hpp"
UABL_Interaction_IdentificationStation_C* UABL_Interaction_IdentificationStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Interactions/ABL_Interaction_IdentificationStation.ABL_Interaction_IdentificationStation_C");
    return (UABL_Interaction_IdentificationStation_C*)res;
}
