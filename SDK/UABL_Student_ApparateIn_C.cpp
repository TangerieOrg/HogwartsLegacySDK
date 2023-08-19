#include "UABL_Student_ApparateIn_C.hpp"
#include "UAblAbility.hpp"
UABL_Student_ApparateIn_C* UABL_Student_ApparateIn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Apparate/ABL_Student_ApparateIn.ABL_Student_ApparateIn_C");
    return (UABL_Student_ApparateIn_C*)res;
}
