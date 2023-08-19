#include "UABL_TrainingDummy_WandLost_C.hpp"
#include "UAblReactionAbility.hpp"
UABL_TrainingDummy_WandLost_C* UABL_TrainingDummy_WandLost_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_TrainingDummy_WandLost.ABL_TrainingDummy_WandLost_C");
    return (UABL_TrainingDummy_WandLost_C*)res;
}
