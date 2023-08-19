#pragma once
#include <cstdint>
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UABP_HebrideanBlack_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_10; // 0x410
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x528
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x548
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_9; // 0x568
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_8; // 0x680
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_7; // 0x798
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_6; // 0x8b0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_5; // 0x9c8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_4; // 0xae0
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_3; // 0xbf8
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_2; // 0xd10
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_1; // 0xe28
    FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController; // 0xf40
    char pad_1058[0x8];
    static UABP_HebrideanBlack_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HebrideanBlack(int32_t EntryPoint);
}; // Size: 0x1060
#pragma pack(pop)
