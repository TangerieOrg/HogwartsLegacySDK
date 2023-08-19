#include "UABL_Enemy_Spawn_FadeIn_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_Enemy_Spawn_FadeIn_C* UABL_Enemy_Spawn_FadeIn_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Spawn/ABL_Enemy_Spawn_FadeIn.ABL_Enemy_Spawn_FadeIn_C");
    return (UABL_Enemy_Spawn_FadeIn_C*)res;
}
