#include "UABL_DuelMoveFwd_C.hpp"
#include "UAblAbility.hpp"
UABL_DuelMoveFwd_C* UABL_DuelMoveFwd_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Locomotion/ABL_DuelMoveFwd.ABL_DuelMoveFwd_C");
    return (UABL_DuelMoveFwd_C*)res;
}
