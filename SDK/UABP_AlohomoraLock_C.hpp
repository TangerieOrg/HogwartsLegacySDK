#pragma once
#include <cstdint>
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_LayeredBoneBlend.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "UAnimInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_AlohomoraLock_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1; // 0x2f8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x348
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3f8
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0x478
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1; // 0x4a8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x568
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x5e8
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x668
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x728
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7a8
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7d8
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1; // 0x888
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x990
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9b0
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xab8
    bool RightStick; // 0xad8
    bool LeftStick; // 0xad9
    bool IsUnlocked; // 0xada
    char pad_adb[0x1];
    float OuterRot; // 0xadc
    float InnerRot; // 0xae0
    bool BeginZoom; // 0xae4
    char pad_ae5[0xb];
    static UABP_AlohomoraLock_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_B03B9B5B4FDB25057E709C8AC29152B0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_ModifyBone_D383A54C4203D447DBDC4097AE9875A2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_B25D100D441BD1DFD0A43ABECCF3BB9D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8A070E4340E381CBAE00608EAE642B2C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_SequencePlayer_8090CB3B4A4F89B751CD3FB32058676B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_AlohomoraLock_AnimGraphNode_TransitionResult_5F88EB444F14D974472F82B244A32D52();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ExecuteUbergraph_ABP_AlohomoraLock(int32_t EntryPoint, float K2Node_Event_DeltaTimeX, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1);
}; // Size: 0xaf0
#pragma pack(pop)
