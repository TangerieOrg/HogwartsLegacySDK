#include "UABL_Alohomora_Complete_C.hpp"
#include "UAblAbility.hpp"
UABL_Alohomora_Complete_C* UABL_Alohomora_Complete_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Loot/ABL_Alohomora_Complete.ABL_Alohomora_Complete_C");
    return (UABL_Alohomora_Complete_C*)res;
}
