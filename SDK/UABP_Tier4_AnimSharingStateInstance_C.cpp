#include "FAnimNode_AmbientFacial.hpp"
#include "FAnimNode_ApplyMeshSpaceAdditive.hpp"
#include "FAnimNode_PoseBlendNode.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_Tier4_AnimSharingStateInstance_C.hpp"
#include "UFunction.hpp"
#include "UPhxAnimSharingStateInstance.hpp"
void UABP_Tier4_AnimSharingStateInstance_C::ExecuteUbergraph_ABP_Tier4_AnimSharingStateInstance(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/ABP_Tier4_AnimSharingStateInstance.ABP_Tier4_AnimSharingStateInstance_C.ExecuteUbergraph_ABP_Tier4_AnimSharingStateInstance"));
    struct Params_ExecuteUbergraph_ABP_Tier4_AnimSharingStateInstance {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_Tier4_AnimSharingStateInstance params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
UABP_Tier4_AnimSharingStateInstance_C* UABP_Tier4_AnimSharingStateInstance_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Pawn/NPC/Tier4/ABP_Tier4_AnimSharingStateInstance.ABP_Tier4_AnimSharingStateInstance_C");
    return (UABP_Tier4_AnimSharingStateInstance_C*)res;
}
void UABP_Tier4_AnimSharingStateInstance_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Pawn/NPC/Tier4/ABP_Tier4_AnimSharingStateInstance.ABP_Tier4_AnimSharingStateInstance_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
