#include "UABL_Enemy_InkySmoke_Spawn_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_Enemy_InkySmoke_Spawn_C* UABL_Enemy_InkySmoke_Spawn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_InkySmoke_Spawn.ABL_Enemy_InkySmoke_Spawn_C");
    return (UABL_Enemy_InkySmoke_Spawn_C*)res;
}
