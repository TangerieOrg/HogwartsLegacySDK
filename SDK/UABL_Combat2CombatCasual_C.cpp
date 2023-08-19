#include "UABL_Combat2CombatCasual_C.hpp"
#include "UAblAbility.hpp"
UABL_Combat2CombatCasual_C* UABL_Combat2CombatCasual_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_Combat2CombatCasual.ABL_Combat2CombatCasual_C");
    return (UABL_Combat2CombatCasual_C*)res;
}
