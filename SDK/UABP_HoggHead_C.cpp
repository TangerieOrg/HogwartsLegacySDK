#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_HoggHead_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_HoggHead_C* UABP_HoggHead_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Characters/Creatures/HoggHead/ABP_HoggHead.ABP_HoggHead_C");
    return (UABP_HoggHead_C*)res;
}
void UABP_HoggHead_C::AnimGraph(FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/HoggHead/ABP_HoggHead.ABP_HoggHead_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink AnimGraph; // 0x0
    }; // Size: 0x10
    Params_AnimGraph params{};
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_HoggHead_C::ExecuteUbergraph_ABP_HoggHead(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/HoggHead/ABP_HoggHead.ABP_HoggHead_C.ExecuteUbergraph_ABP_HoggHead"));
    struct Params_ExecuteUbergraph_ABP_HoggHead {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_HoggHead params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
