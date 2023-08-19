#include "UABL_NPCFinisherAware_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_NPCFinisherAware_C* UABL_NPCFinisherAware_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Reactions/Finisher/ABL_NPCFinisherAware.ABL_NPCFinisherAware_C");
    return (UABL_NPCFinisherAware_C*)res;
}
