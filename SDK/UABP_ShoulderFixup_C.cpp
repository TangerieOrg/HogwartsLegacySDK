#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_ShoulderFixup_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_ShoulderFixup_C* UABP_ShoulderFixup_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Animation/Blueprints/ABP_ShoulderFixup.ABP_ShoulderFixup_C");
    return (UABP_ShoulderFixup_C*)res;
}
void UABP_ShoulderFixup_C::AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Blueprints/ABP_ShoulderFixup.ABP_ShoulderFixup_C.AnimGraph"));
    struct Params_AnimGraph {
        FPoseLink InPose; // 0x0
        FPoseLink AnimGraph; // 0x10
    }; // Size: 0x20
    Params_AnimGraph params{};
    params.InPose = (FPoseLink)InPose;
    params.AnimGraph = (FPoseLink)AnimGraph;
    ProcessEvent(func, &params);
    AnimGraph = params.AnimGraph;
}
void UABP_ShoulderFixup_C::BlueprintInitializeAnimation0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Blueprints/ABP_ShoulderFixup.ABP_ShoulderFixup_C.BlueprintInitializeAnimation"));
    struct Params_BlueprintInitializeAnimation {
    }; // Size: 0x0
    Params_BlueprintInitializeAnimation params{};
    ProcessEvent(func, &params);
}
void UABP_ShoulderFixup_C::ExecuteUbergraph_ABP_ShoulderFixup(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Blueprints/ABP_ShoulderFixup.ABP_ShoulderFixup_C.ExecuteUbergraph_ABP_ShoulderFixup"));
    struct Params_ExecuteUbergraph_ABP_ShoulderFixup {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_ShoulderFixup params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
