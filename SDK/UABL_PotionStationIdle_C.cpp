#include "UABL_PotionStationIdle_C.hpp"
#include "UAblAbility.hpp"
UABL_PotionStationIdle_C* UABL_PotionStationIdle_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/PotionStation/ABL_PotionStationIdle.ABL_PotionStationIdle_C");
    return (UABL_PotionStationIdle_C*)res;
}
