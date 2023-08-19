#pragma once
#include <cstdint>
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LinkedInputPose.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPoseLink.hpp"
#include "FRotator.hpp"
#include "UAnimInstance.hpp"
#pragma pack(push, 1)
class UABP_FloatingBalloon_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    char pad_2f8[0x8];
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_1; // 0x300
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x740
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x760
    FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x780
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xbc0
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1; // 0xcd8
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xde0
    FRotator PropRotation; // 0xee8
    FRotator BalloonRot; // 0xef4
    float PropSpeed; // 0xf00
    float BalloonRotSpeed; // 0xf04
    char pad_f08[0x8];
    static UABP_FloatingBalloon_C* StaticClass();
    void AnimGraph(FPoseLink InPose, FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void BlueprintBeginPlay0();
    void ExecuteUbergraph_ABP_FloatingBalloon(int32_t EntryPoint, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue_3);
}; // Size: 0xf10
#pragma pack(pop)
