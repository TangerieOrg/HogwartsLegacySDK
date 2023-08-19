#include "UABL_Creature_Trot_BS_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_Trot_BS_C* UABL_Creature_Trot_BS_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_Trot_BS.ABL_Creature_Trot_BS_C");
    return (UABL_Creature_Trot_BS_C*)res;
}
