#include "UABL_TrainingDummy_WandPickup_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_TrainingDummy_WandPickup_C* UABL_TrainingDummy_WandPickup_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_TrainingDummy_WandPickup.ABL_TrainingDummy_WandPickup_C");
    return (UABL_TrainingDummy_WandPickup_C*)res;
}
