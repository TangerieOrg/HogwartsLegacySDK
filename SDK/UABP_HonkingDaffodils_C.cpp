#include "FAnimNode_RandomPlayer.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_HonkingDaffodils_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
void UABP_HonkingDaffodils_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Environment/WorldEvents/HonkingDaffodils/ABP_HonkingDaffodils.ABP_HonkingDaffodils_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
UABP_HonkingDaffodils_C* UABP_HonkingDaffodils_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Animation/Environment/WorldEvents/HonkingDaffodils/ABP_HonkingDaffodils.ABP_HonkingDaffodils_C");
    return (UABP_HonkingDaffodils_C*)res;
}
void UABP_HonkingDaffodils_C::ExecuteUbergraph_ABP_HonkingDaffodils(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Environment/WorldEvents/HonkingDaffodils/ABP_HonkingDaffodils.ABP_HonkingDaffodils_C.ExecuteUbergraph_ABP_HonkingDaffodils"));
    struct Params_ExecuteUbergraph_ABP_HonkingDaffodils {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_HonkingDaffodils params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
