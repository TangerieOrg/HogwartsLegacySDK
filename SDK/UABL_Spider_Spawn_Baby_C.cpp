#include "UABL_Spider_Spawn_Baby_C.hpp"
#include "UAblAbility.hpp"
UABL_Spider_Spawn_Baby_C* UABL_Spider_Spawn_Baby_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Spawn/ABL_Spider_Spawn_Baby.ABL_Spider_Spawn_Baby_C");
    return (UABL_Spider_Spawn_Baby_C*)res;
}
