#include "UABL_RCT_NPC_Crucio_End_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_NPC_Crucio_End_C* UABL_RCT_NPC_Crucio_End_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/Reactions/ABL_RCT_NPC_Crucio_End.ABL_RCT_NPC_Crucio_End_C");
    return (UABL_RCT_NPC_Crucio_End_C*)res;
}
