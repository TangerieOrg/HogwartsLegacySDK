#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SpringBone.hpp"
#include "FAnimNode_Trail.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_FlyingBroom_C.hpp"
#include "UAnimInstance.hpp"
#include "UFlyingBroom_AnimInstance.hpp"
#include "UFunction.hpp"
UABP_FlyingBroom_C* UABP_FlyingBroom_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Props/FlyingBroom/ABP_FlyingBroom.ABP_FlyingBroom_C");
    return (UABP_FlyingBroom_C*)res;
}
void UABP_FlyingBroom_C::AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FlyingBroom/ABP_FlyingBroom.ABP_FlyingBroom_C.AnimGraph"));
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
void UABP_FlyingBroom_C::ExecuteUbergraph_ABP_FlyingBroom(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Props/FlyingBroom/ABP_FlyingBroom.ABP_FlyingBroom_C.ExecuteUbergraph_ABP_FlyingBroom"));
    struct Params_ExecuteUbergraph_ABP_FlyingBroom {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_FlyingBroom params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
