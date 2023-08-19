#include "UABL_RagdollPlayerBehavior_C.hpp"
#include "UAblRagdollReactionAbility.hpp"
UABL_RagdollPlayerBehavior_C* UABL_RagdollPlayerBehavior_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/Student/Abilities/Reactions/ABL_RagdollPlayerBehavior.ABL_RagdollPlayerBehavior_C");
    return (UABL_RagdollPlayerBehavior_C*)res;
}
