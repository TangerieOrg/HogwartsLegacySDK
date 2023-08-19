#include "UABL_HouseElf_Hiding_Flee_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_HouseElf_Hiding_Flee_C* UABL_HouseElf_Hiding_Flee_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Shared/Abilities/NonCombat/Custom/HouseElf/ABL_HouseElf_Hiding_Flee.ABL_HouseElf_Hiding_Flee_C");
    return (UABL_HouseElf_Hiding_Flee_C*)res;
}
