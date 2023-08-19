#include "FAnimNode_CustomizableCharacterEyeCap.hpp"
#include "FAnimNode_CustomizableCharacterFacialPoseBlendNode.hpp"
#include "FAnimNode_CustomizableCharacterLocalModifyBoneScales.hpp"
#include "FAnimNode_EyeTarget.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UABP_CC_Facial_C.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UABP_CC_Facial_C* UABP_CC_Facial_C::StaticClass() {
    static auto res = find_uobject("AnimBlueprintGeneratedClass /Game/Animation/Blueprints/ABP_CC_Facial.ABP_CC_Facial_C");
    return (UABP_CC_Facial_C*)res;
}
void UABP_CC_Facial_C::ExecuteUbergraph_ABP_CC_Facial(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Blueprints/ABP_CC_Facial.ABP_CC_Facial_C.ExecuteUbergraph_ABP_CC_Facial"));
    struct Params_ExecuteUbergraph_ABP_CC_Facial {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_ABP_CC_Facial params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UABP_CC_Facial_C::AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Blueprints/ABP_CC_Facial.ABP_CC_Facial_C.AnimGraph"));
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
void UABP_CC_Facial_C::BlueprintInitializeAnimation0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Animation/Blueprints/ABP_CC_Facial.ABP_CC_Facial_C.BlueprintInitializeAnimation"));
    struct Params_BlueprintInitializeAnimation {
    }; // Size: 0x0
    Params_BlueprintInitializeAnimation params{};
    ProcessEvent(func, &params);
}
