#include "UABL_RCT_DGBG_Flipendo_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_RCT_DGBG_Flipendo_C* UABL_RCT_DGBG_Flipendo_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/Reactions/ABL_RCT_DGBG_Flipendo.ABL_RCT_DGBG_Flipendo_C");
    return (UABL_RCT_DGBG_Flipendo_C*)res;
}
