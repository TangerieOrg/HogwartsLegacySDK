#include "UABL_Spider_Attack_Spit_Quick_C.hpp"
#include "UAblAbility.hpp"
UABL_Spider_Attack_Spit_Quick_C* UABL_Spider_Attack_Spit_Quick_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Attacks/ABL_Spider_Attack_Spit_Quick.ABL_Spider_Attack_Spit_Quick_C");
    return (UABL_Spider_Attack_Spit_Quick_C*)res;
}
