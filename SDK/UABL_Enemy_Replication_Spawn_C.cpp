#include "UABL_Enemy_Replication_Spawn_C.hpp"
#include "UAblAbility.hpp"
UABL_Enemy_Replication_Spawn_C* UABL_Enemy_Replication_Spawn_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/DarkWizard/Data/Abilities/Spawn/ABL_Enemy_Replication_Spawn.ABL_Enemy_Replication_Spawn_C");
    return (UABL_Enemy_Replication_Spawn_C*)res;
}
