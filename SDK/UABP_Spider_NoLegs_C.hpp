#pragma once
#include <cstdint>
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UABP_Spider_NoLegs_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    char pad_2f8[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x300
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x740
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0xb80
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0xfc0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1400
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1840
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1c80
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_1; // 0x20c0
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2500
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2520
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2638
    char pad_2658[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2660
    static UABP_Spider_NoLegs_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Spider_NoLegs(int32_t EntryPoint);
}; // Size: 0x2aa0
#pragma pack(pop)
