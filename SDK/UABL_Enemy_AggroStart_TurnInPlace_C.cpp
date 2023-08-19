#include "UABL_Enemy_AggroStart_TurnInPlace_C.hpp"
#include "UAblAbility.hpp"
UABL_Enemy_AggroStart_TurnInPlace_C* UABL_Enemy_AggroStart_TurnInPlace_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Aware/ABL_Enemy_AggroStart_TurnInPlace.ABL_Enemy_AggroStart_TurnInPlace_C");
    return (UABL_Enemy_AggroStart_TurnInPlace_C*)res;
}
