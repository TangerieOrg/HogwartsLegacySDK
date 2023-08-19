#include "UABL_AncientMagic_Discover_C.hpp"
#include "UAblAbility.hpp"
UABL_AncientMagic_Discover_C* UABL_AncientMagic_Discover_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/AncientMagic/ABL_AncientMagic_Discover.ABL_AncientMagic_Discover_C");
    return (UABL_AncientMagic_Discover_C*)res;
}
