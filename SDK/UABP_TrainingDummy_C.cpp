#include "FAnimNode_AbilityAnimPlayer.hpp"
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_TrainingDummy_C.hpp"
#include "UEnemy_AnimInstance.hpp"
#include "UFunction.hpp"
UABP_TrainingDummy_C* UABP_TrainingDummy_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABP_TrainingDummy.ABP_TrainingDummy_C");
    return (UABP_TrainingDummy_C*)res;
}
void UABP_TrainingDummy_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABP_TrainingDummy.ABP_TrainingDummy_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_TrainingDummy_C::ExecuteUbergraph_ABP_TrainingDummy(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Enemy/Character/TrainingDummy/ABP_TrainingDummy.ABP_TrainingDummy_C.ExecuteUbergraph_ABP_TrainingDummy"));
    struct Params_ExecuteUbergraph_ABP_TrainingDummy {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_TrainingDummy params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
