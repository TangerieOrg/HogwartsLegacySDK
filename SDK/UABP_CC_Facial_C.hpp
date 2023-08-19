#pragma once
#include <cstdint>
#include "FAnimNode_CustomizableCharacterEyeCap.hpp"
#include "FAnimNode_CustomizableCharacterFacialPoseBlendNode.hpp"
#include "FAnimNode_CustomizableCharacterLocalModifyBoneScales.hpp"
#include "FAnimNode_EyeTarget.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UABP_CC_Facial_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_CustomizableCharacterFacialPoseBlendNode AnimGraphNode_CustomizableCharacterFacialPoseBlendNode; // 0x2f8
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x3a8
    FAnimNode_CustomizableCharacterEyeCap AnimGraphNode_CustomizableCharacterEyeCap; // 0x4c0
    char pad_538[0x8];
    FAnimNode_EyeTarget AnimGraphNode_EyeTarget; // 0x540
    FAnimNode_CustomizableCharacterLocalModifyBoneScales AnimGraphNode_CustomizableCharacterLocalModifyBoneScales; // 0x6a0
    static UABP_CC_Facial_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void BlueprintInitializeAnimation0();
    void ExecuteUbergraph_ABP_CC_Facial(int32_t EntryPoint);
}; // Size: 0x700
#pragma pack(pop)
