#include "UABL_SPD_Apparate_Wait_C.hpp"
#include "UAblAbility.hpp"
UABL_SPD_Apparate_Wait_C* UABL_SPD_Apparate_Wait_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Spider/Abilities/ABL_SPD_Apparate_Wait.ABL_SPD_Apparate_Wait_C");
    return (UABL_SPD_Apparate_Wait_C*)res;
}
