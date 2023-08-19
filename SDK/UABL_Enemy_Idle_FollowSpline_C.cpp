#include "UABL_Enemy_Idle_FollowSpline_C.hpp"
#include "UAblAbility.hpp"
UABL_Enemy_Idle_FollowSpline_C* UABL_Enemy_Idle_FollowSpline_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Abilities/Idle/ABL_Enemy_Idle_FollowSpline.ABL_Enemy_Idle_FollowSpline_C");
    return (UABL_Enemy_Idle_FollowSpline_C*)res;
}
