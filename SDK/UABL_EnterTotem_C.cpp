#include "UABL_EnterTotem_C.hpp"
#include "UAblAbility.hpp"
UABL_EnterTotem_C* UABL_EnterTotem_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/Totem/ABL_EnterTotem.ABL_EnterTotem_C");
    return (UABL_EnterTotem_C*)res;
}
