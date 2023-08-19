#include "UABL_Enemy_Spawn_Freeze_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_Enemy_Spawn_Freeze_C* UABL_Enemy_Spawn_Freeze_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_Freeze.ABL_Enemy_Spawn_Freeze_C");
    return (UABL_Enemy_Spawn_Freeze_C*)res;
}
