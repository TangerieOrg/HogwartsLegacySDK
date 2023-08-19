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
class UABP_VenomousTencula_Dynamics_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2c8
    FAnimNode_Root AnimGraphNode_Root; // 0x3e0
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x410
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x430
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_1; // 0x450
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x890
    static UABP_VenomousTencula_Dynamics_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_VenomousTencula_Dynamics(int32_t EntryPoint);
}; // Size: 0xcd0
#pragma pack(pop)
