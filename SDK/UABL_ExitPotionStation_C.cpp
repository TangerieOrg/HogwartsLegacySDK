#include "UABL_ExitPotionStation_C.hpp"
#include "UAblAbility.hpp"
UABL_ExitPotionStation_C* UABL_ExitPotionStation_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PotionStation/ABL_ExitPotionStation.ABL_ExitPotionStation_C");
    return (UABL_ExitPotionStation_C*)res;
}
