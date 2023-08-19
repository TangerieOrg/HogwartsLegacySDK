#include "UABL_Alohomora_Cancel_C.hpp"
#include "UAblAbility.hpp"
UABL_Alohomora_Cancel_C* UABL_Alohomora_Cancel_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Loot/ABL_Alohomora_Cancel.ABL_Alohomora_Cancel_C");
    return (UABL_Alohomora_Cancel_C*)res;
}
