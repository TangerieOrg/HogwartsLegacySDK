#include "UABL_Enemy_Spawn_Hidden_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_Enemy_Spawn_Hidden_C* UABL_Enemy_Spawn_Hidden_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_Hidden.ABL_Enemy_Spawn_Hidden_C");
    return (UABL_Enemy_Spawn_Hidden_C*)res;
}
