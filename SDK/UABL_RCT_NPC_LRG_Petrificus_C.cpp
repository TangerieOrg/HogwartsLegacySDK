#include "UABL_RCT_NPC_LRG_Petrificus_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_LRG_Petrificus_C* UABL_RCT_NPC_LRG_Petrificus_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_RCT_NPC_LRG_Petrificus.ABL_RCT_NPC_LRG_Petrificus_C");
    return (UABL_RCT_NPC_LRG_Petrificus_C*)res;
}
