#include "UABL_EnterPotionStation_C.hpp"
#include "UAblAbility.hpp"
UABL_EnterPotionStation_C* UABL_EnterPotionStation_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/PotionStation/ABL_EnterPotionStation.ABL_EnterPotionStation_C");
    return (UABL_EnterPotionStation_C*)res;
}
