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
class UABP_Biped_PostProcess_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_63; // 0x2c8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_62; // 0x3e0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_61; // 0x4f8
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x610
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_60; // 0x630
    char pad_748[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x750
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_59; // 0xb90
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_58; // 0xca8
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xdc0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_57; // 0xde0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_56; // 0xef8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_55; // 0x1010
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_54; // 0x1128
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_53; // 0x1240
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_52; // 0x1358
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_51; // 0x1470
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_50; // 0x1588
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_49; // 0x16a0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_48; // 0x17b8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_47; // 0x18d0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_46; // 0x19e8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_45; // 0x1b00
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_44; // 0x1c18
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_43; // 0x1d30
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_42; // 0x1e48
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_41; // 0x1f60
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_40; // 0x2078
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_39; // 0x2190
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_38; // 0x22a8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_37; // 0x23c0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_36; // 0x24d8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_35; // 0x25f0
    char pad_2708[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2710
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2b50
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2f90
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x33d0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_34; // 0x3810
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_33; // 0x3928
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_32; // 0x3a40
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_31; // 0x3b58
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_30; // 0x3c70
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_29; // 0x3d88
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_28; // 0x3ea0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_27; // 0x3fb8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_26; // 0x40d0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_25; // 0x41e8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_24; // 0x4300
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_23; // 0x4418
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x4530
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_22; // 0x4970
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_21; // 0x4a88
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x4ba0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_20; // 0x4cb8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_19; // 0x4dd0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_18; // 0x4ee8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_17; // 0x5000
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_16; // 0x5118
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_15; // 0x5230
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_14; // 0x5348
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_13; // 0x5460
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_12; // 0x5578
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_11; // 0x5690
    char pad_57a8[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_1; // 0x57b0
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x5bf0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_10; // 0x6030
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_9; // 0x6148
    FAnimNode_Root AnimGraphNode_Root; // 0x6260
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_8; // 0x6290
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_7; // 0x63a8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6; // 0x64c0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_5; // 0x65d8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0x66f0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0x6808
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0x6920
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_1; // 0x6a38
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0x6b50
    char pad_6c68[0x8];
    static UABP_Biped_PostProcess_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_Biped_PostProcess(int32_t EntryPoint);
}; // Size: 0x6c70
#pragma pack(pop)
