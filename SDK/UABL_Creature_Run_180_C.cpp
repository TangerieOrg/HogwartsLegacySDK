#include "UABL_Creature_Run_180_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_Run_180_C* UABL_Creature_Run_180_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_Run_180.ABL_Creature_Run_180_C");
    return (UABL_Creature_Run_180_C*)res;
}
