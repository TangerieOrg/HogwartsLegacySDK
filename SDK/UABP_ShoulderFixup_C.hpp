#pragma once
#include <cstdint>
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UABP_ShoulderFixup_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x410
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x518
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x538
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x558
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1; // 0x660
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x768
    float Alpha; // 0x870
    char pad_874[0xc];
    static UABP_ShoulderFixup_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation0();
    void ExecuteUbergraph_ABP_ShoulderFixup(int32_t EntryPoint);
}; // Size: 0x880
#pragma pack(pop)
