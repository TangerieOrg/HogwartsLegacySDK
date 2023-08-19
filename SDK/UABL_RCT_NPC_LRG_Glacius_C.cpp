#include "UABL_RCT_NPC_LRG_Glacius_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_LRG_Glacius_C* UABL_RCT_NPC_LRG_Glacius_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_RCT_NPC_LRG_Glacius.ABL_RCT_NPC_LRG_Glacius_C");
    return (UABL_RCT_NPC_LRG_Glacius_C*)res;
}
