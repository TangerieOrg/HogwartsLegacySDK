#include "UABL_Spider_Spawn_DescendEnd_C.hpp"
#include "UAblAbility.hpp"
UABL_Spider_Spawn_DescendEnd_C* UABL_Spider_Spawn_DescendEnd_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_DescendEnd.ABL_Spider_Spawn_DescendEnd_C");
    return (UABL_Spider_Spawn_DescendEnd_C*)res;
}
