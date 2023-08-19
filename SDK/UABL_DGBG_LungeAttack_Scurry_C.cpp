#include "UABL_DGBG_LungeAttack_Scurry_C.hpp"
#include "UAblAbility.hpp"
UABL_DGBG_LungeAttack_Scurry_C* UABL_DGBG_LungeAttack_Scurry_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_LungeAttack_Scurry.ABL_DGBG_LungeAttack_Scurry_C");
    return (UABL_DGBG_LungeAttack_Scurry_C*)res;
}
