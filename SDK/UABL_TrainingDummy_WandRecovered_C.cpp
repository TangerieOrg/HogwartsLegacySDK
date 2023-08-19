#include "UABL_TrainingDummy_WandRecovered_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_TrainingDummy_WandRecovered_C* UABL_TrainingDummy_WandRecovered_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_TrainingDummy_WandRecovered.ABL_TrainingDummy_WandRecovered_C");
    return (UABL_TrainingDummy_WandRecovered_C*)res;
}
