#include "UABL_Creature_BecomeAware_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_BecomeAware_C* UABL_Creature_BecomeAware_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_BecomeAware.ABL_Creature_BecomeAware_C");
    return (UABL_Creature_BecomeAware_C*)res;
}
