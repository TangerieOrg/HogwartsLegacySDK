#include "UABL_Alohomora_C.hpp"
#include "UAblAbility.hpp"
UABL_Alohomora_C* UABL_Alohomora_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Loot/ABL_Alohomora.ABL_Alohomora_C");
    return (UABL_Alohomora_C*)res;
}
