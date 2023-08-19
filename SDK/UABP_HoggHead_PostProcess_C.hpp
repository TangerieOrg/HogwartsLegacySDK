#pragma once
#include <cstdint>
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UABP_HoggHead_PostProcess_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2f8
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0x410
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x850
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x870
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x890
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0xcd0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x1110
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x1550
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x1990
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x1dd0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x2210
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2650
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2a90
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2ed0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x3310
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3750
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x3b90
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3fd0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_1; // 0x4410
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4850
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_1; // 0x4c90
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x4da8
    static UABP_HoggHead_PostProcess_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HoggHead_PostProcess(int32_t EntryPoint);
}; // Size: 0x4ec0
#pragma pack(pop)
