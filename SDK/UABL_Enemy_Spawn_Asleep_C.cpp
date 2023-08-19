#include "UABL_Enemy_Spawn_Asleep_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_Enemy_Spawn_Asleep_C* UABL_Enemy_Spawn_Asleep_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_Asleep.ABL_Enemy_Spawn_Asleep_C");
    return (UABL_Enemy_Spawn_Asleep_C*)res;
}
