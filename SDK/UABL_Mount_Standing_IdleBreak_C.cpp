#include "UABL_Mount_Standing_IdleBreak_C.hpp"
#include "UAblAbility.hpp"
UABL_Mount_Standing_IdleBreak_C* UABL_Mount_Standing_IdleBreak_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/Mounts/ABL_Mount_Standing_IdleBreak.ABL_Mount_Standing_IdleBreak_C");
    return (UABL_Mount_Standing_IdleBreak_C*)res;
}
