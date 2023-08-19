#include "UABL_Enemy_Spawn_WipeIn_Dugbog_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_Enemy_Spawn_WipeIn_Dugbog_C* UABL_Enemy_Spawn_WipeIn_Dugbog_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_WipeIn_Dugbog.ABL_Enemy_Spawn_WipeIn_Dugbog_C");
    return (UABL_Enemy_Spawn_WipeIn_Dugbog_C*)res;
}
