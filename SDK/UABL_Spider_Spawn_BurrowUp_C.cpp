#include "UABL_Spider_Spawn_BurrowUp_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_Spider_Spawn_BurrowUp_C* UABL_Spider_Spawn_BurrowUp_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_BurrowUp.ABL_Spider_Spawn_BurrowUp_C");
    return (UABL_Spider_Spawn_BurrowUp_C*)res;
}
