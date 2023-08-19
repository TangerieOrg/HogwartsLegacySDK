#include "UABL_CombatDeath_Respawn_C.hpp"
#include "UAblAbility.hpp"
UABL_CombatDeath_Respawn_C* UABL_CombatDeath_Respawn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_CombatDeath_Respawn.ABL_CombatDeath_Respawn_C");
    return (UABL_CombatDeath_Respawn_C*)res;
}
