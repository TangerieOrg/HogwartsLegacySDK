#include "UABL_AncientMagic_Reveal_C.hpp"
#include "UAblAbility.hpp"
UABL_AncientMagic_Reveal_C* UABL_AncientMagic_Reveal_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/AncientMagic/ABL_AncientMagic_Reveal.ABL_AncientMagic_Reveal_C");
    return (UABL_AncientMagic_Reveal_C*)res;
}
