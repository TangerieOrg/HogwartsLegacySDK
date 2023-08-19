#include "FAnimNode_BlendListByBool.hpp"
#include "FAnimNode_CopyPoseFromMesh.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_Tier4_SharedTransition_C.hpp"
#include "UAnimSharingTransitionInstance.hpp"
#include "UFunction.hpp"
UABP_Tier4_SharedTransition_C* UABP_Tier4_SharedTransition_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Pawn/NPC/Tier4/ABP_Tier4_SharedTransition.ABP_Tier4_SharedTransition_C");
    return (UABP_Tier4_SharedTransition_C*)res;
}
void UABP_Tier4_SharedTransition_C::ExecuteUbergraph_ABP_Tier4_SharedTransition(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/ABP_Tier4_SharedTransition.ABP_Tier4_SharedTransition_C.ExecuteUbergraph_ABP_Tier4_SharedTransition"));
    struct Params_ExecuteUbergraph_ABP_Tier4_SharedTransition {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_Tier4_SharedTransition params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UABP_Tier4_SharedTransition_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/ABP_Tier4_SharedTransition.ABP_Tier4_SharedTransition_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
