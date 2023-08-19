#include "UABL_MineCart_Idle_C.hpp"
#include "UAblAbility.hpp"
UABL_MineCart_Idle_C* UABL_MineCart_Idle_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/MineCart/ABL_MineCart_Idle.ABL_MineCart_Idle_C");
    return (UABL_MineCart_Idle_C*)res;
}
