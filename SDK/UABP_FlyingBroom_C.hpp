#pragma once
#include <cstdint>
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SpringBone.hpp"
#include "FAnimNode_Trail.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UAnimInstance.hpp"
#include "UFlyingBroom_AnimInstance.hpp"
#pragma pack(push, 1)
class UABP_FlyingBroom_C : public UAnimInstance, public UFlyingBroom_AnimInstance {
public:
    char pad_590[0x2b0];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_32; // 0x840
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_31; // 0xc80
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_30; // 0x10c0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_29; // 0x1500
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_28; // 0x1940
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1d80
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_27; // 0x1da0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_26; // 0x21e0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_25; // 0x2620
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_24; // 0x2a60
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_23; // 0x2ea0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_22; // 0x32e0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_21; // 0x3720
    FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x3b60
    char pad_3c88[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_20; // 0x3c90
    FAnimNode_Root AnimGraphNode_Root; // 0x40d0
    FAnimNode_Trail AnimGraphNode_Trail_2; // 0x4100
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_19; // 0x4360
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_18; // 0x47a0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_17; // 0x4be0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0x5020
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x5460
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x58a0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x5ce0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x6120
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x6560
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x69a0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x6de0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x7220
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x7660
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x7aa0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x7ee0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x8320
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x8760
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x8ba0
    FAnimNode_Trail AnimGraphNode_Trail_1; // 0x8fe0
    FAnimNode_SpringBone AnimGraphNode_SpringBone_1; // 0x9240
    char pad_9368[0x8];
    FAnimNode_Trail AnimGraphNode_Trail; // 0x9370
    FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x95d0
    char pad_96f8[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_1; // 0x9700
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x9b40
    static UABP_FlyingBroom_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_FlyingBroom(int32_t EntryPoint);
}; // Size: 0x9f80
#pragma pack(pop)
