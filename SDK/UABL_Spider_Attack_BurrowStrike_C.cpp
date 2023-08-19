#include "UABL_Spider_Attack_BurrowStrike_C.hpp"
#include "UAblAbility.hpp"
UABL_Spider_Attack_BurrowStrike_C* UABL_Spider_Attack_BurrowStrike_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/Attacks/ABL_Spider_Attack_BurrowStrike.ABL_Spider_Attack_BurrowStrike_C");
    return (UABL_Spider_Attack_BurrowStrike_C*)res;
}
