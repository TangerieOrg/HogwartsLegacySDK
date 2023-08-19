#include "UABL_DGBG_LungeAttack_Land_C.hpp"
#include "UAblAbility.hpp"
UABL_DGBG_LungeAttack_Land_C* UABL_DGBG_LungeAttack_Land_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_LungeAttack_Land.ABL_DGBG_LungeAttack_Land_C");
    return (UABL_DGBG_LungeAttack_Land_C*)res;
}
