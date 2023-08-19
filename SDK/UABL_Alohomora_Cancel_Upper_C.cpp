#include "UABL_Alohomora_Cancel_Upper_C.hpp"
#include "UAblAbility.hpp"
UABL_Alohomora_Cancel_Upper_C* UABL_Alohomora_Cancel_Upper_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Loot/ABL_Alohomora_Cancel_Upper.ABL_Alohomora_Cancel_Upper_C");
    return (UABL_Alohomora_Cancel_Upper_C*)res;
}
