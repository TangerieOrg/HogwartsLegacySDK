#include "UABL_Dungeon_Exit_C.hpp"
#include "UAblAbility.hpp"
UABL_Dungeon_Exit_C* UABL_Dungeon_Exit_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Transitions/ABL_Dungeon_Exit.ABL_Dungeon_Exit_C");
    return (UABL_Dungeon_Exit_C*)res;
}
