#include "UABL_NpcReact_ButtSliding_Loop_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_NpcReact_ButtSliding_Loop_C* UABL_NpcReact_ButtSliding_Loop_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/ButtSliding/ABL_NpcReact_ButtSliding_Loop.ABL_NpcReact_ButtSliding_Loop_C");
    return (UABL_NpcReact_ButtSliding_Loop_C*)res;
}
