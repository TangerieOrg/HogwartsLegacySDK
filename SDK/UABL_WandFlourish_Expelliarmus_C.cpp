#include "UABL_WandFlourish_Expelliarmus_C.hpp"
#include "UAblAbility.hpp"
UABL_WandFlourish_Expelliarmus_C* UABL_WandFlourish_Expelliarmus_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Attacks/ABL_WandFlourish_Expelliarmus.ABL_WandFlourish_Expelliarmus_C");
    return (UABL_WandFlourish_Expelliarmus_C*)res;
}
