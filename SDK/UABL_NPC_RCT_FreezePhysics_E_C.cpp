#include "UABL_NPC_RCT_FreezePhysics_E_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NPC_RCT_FreezePhysics_E_C* UABL_NPC_RCT_FreezePhysics_E_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_NPC_RCT_FreezePhysics_E.ABL_NPC_RCT_FreezePhysics_E_C");
    return (UABL_NPC_RCT_FreezePhysics_E_C*)res;
}
