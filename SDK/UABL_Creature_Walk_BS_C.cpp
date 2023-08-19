#include "UABL_Creature_Walk_BS_C.hpp"
#include "UAblAbility.hpp"
UABL_Creature_Walk_BS_C* UABL_Creature_Walk_BS_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Creature/Abilities/ABL_Creature_Walk_BS.ABL_Creature_Walk_BS_C");
    return (UABL_Creature_Walk_BS_C*)res;
}
