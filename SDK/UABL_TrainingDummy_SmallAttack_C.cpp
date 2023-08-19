#include "UABL_TrainingDummy_SmallAttack_C.hpp"
#include "UAblNPCAbility.hpp"
UABL_TrainingDummy_SmallAttack_C* UABL_TrainingDummy_SmallAttack_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABL_TrainingDummy_SmallAttack.ABL_TrainingDummy_SmallAttack_C");
    return (UABL_TrainingDummy_SmallAttack_C*)res;
}
