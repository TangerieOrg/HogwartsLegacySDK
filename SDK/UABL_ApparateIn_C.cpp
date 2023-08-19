#include "UABL_ApparateIn_C.hpp"
#include "UAblAbility.hpp"
UABL_ApparateIn_C* UABL_ApparateIn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Apparate/ABL_ApparateIn.ABL_ApparateIn_C");
    return (UABL_ApparateIn_C*)res;
}
