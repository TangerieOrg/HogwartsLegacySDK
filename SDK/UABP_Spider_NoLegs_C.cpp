#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_Spider_NoLegs_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_Spider_NoLegs_C* UABP_Spider_NoLegs_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/RiggedObjects/Characters/Creatures/Insects/Spiders/Thornback/SpiderParts/ABP_Spider_NoLegs.ABP_Spider_NoLegs_C");
    return (UABP_Spider_NoLegs_C*)res;
}
void UABP_Spider_NoLegs_C::AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/Insects/Spiders/Thornback/SpiderParts/ABP_Spider_NoLegs.ABP_Spider_NoLegs_C.AnimGraph"));
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
void UABP_Spider_NoLegs_C::ExecuteUbergraph_ABP_Spider_NoLegs(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/RiggedObjects/Characters/Creatures/Insects/Spiders/Thornback/SpiderParts/ABP_Spider_NoLegs.ABP_Spider_NoLegs_C.ExecuteUbergraph_ABP_Spider_NoLegs"));
    struct Params_ExecuteUbergraph_ABP_Spider_NoLegs {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_Spider_NoLegs params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
