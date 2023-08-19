#pragma once
#include <cstdint>
#include "FAnimNode_AbilityAnimPlayer.hpp"
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UEnemy_AnimInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_TrainingDummy_C : public UEnemy_AnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x690
    FAnimNode_Root AnimGraphNode_Root; // 0x698
    char pad_6c8[0x8];
    FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x6d0
    FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x780
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x830
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x860
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x910
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x930
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0x950
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0xd90
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x11d0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x1610
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x1a50
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x1e90
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x22d0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x2710
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2b50
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2f90
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x33d0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x3810
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3c50
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x4090
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x44d0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_1; // 0x4910
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4d50
    static UABP_TrainingDummy_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_TrainingDummy(int32_t EntryPoint);
}; // Size: 0x5190
#pragma pack(pop)
