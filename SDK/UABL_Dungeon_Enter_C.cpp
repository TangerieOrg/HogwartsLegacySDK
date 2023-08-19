#include "UABL_Dungeon_Enter_C.hpp"
#include "UAblAbility.hpp"
UABL_Dungeon_Enter_C* UABL_Dungeon_Enter_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Dungeon_Enter.ABL_Dungeon_Enter_C");
    return (UABL_Dungeon_Enter_C*)res;
}
