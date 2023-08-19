#pragma once
#include <cstdint>
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_Leech_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x2f8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x320
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x348
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x370
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x398
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x3c0
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x3e8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x410
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x438
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x460
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x488
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x4b0
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1; // 0x4d8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x500
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x528
    FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x5a8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5d8
    FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x658
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x688
    FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x708
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x738
    FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x7b8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x7e8
    FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x868
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x898
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x918
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x948
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0x9c8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9f8
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa78
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xaa8
    bool Collect; // 0xb58
    bool PlayIdleBreak; // 0xb59
    char pad_b5a[0x2];
    int32_t IdleNum; // 0xb5c
    float LastBreakTime; // 0xb60
    float TimeBetweenBreaks; // 0xb64
    bool ResetFromCollect; // 0xb68
    char pad_b69[0x7];
    static UABP_Leech_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_F78B756F4CECC940CD6C578BD5693BC7();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_40B1E5B4402EC3CA373C829D22A63040();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_C4AE85B94C0DBF344A2426A8CF100644();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_94433BCC44F7847E64BB6F870D2C5685();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_8AA38AB1426D9F80C11E1A8C9717C9BA();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_21EF95F4492FA9CEBE303E894ADE836F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_54FCCD47485FED729DE1C5A8EB85DB7B();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_0474C1DE48AB25B6D8AD25991EEA2430();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_B7408692479B0FC257B85BA74E79212F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_AAE22BC04C01D9C195C0B387C7D7999F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_C057706D4EB66F20EE6665817ED4AC73();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Leech_AnimGraphNode_TransitionResult_5A7DE19E4E708ED68927A7BBCE79CC9F();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void ResetFromCollectEvent();
    void ExecuteUbergraph_ABP_Leech(int32_t EntryPoint, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_3, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_4, float CallFunc_GetRelevantAnimTimeRemainingFraction_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_5, float K2Node_Event_DeltaTimeX, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32_t CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue);
}; // Size: 0xb70
#pragma pack(pop)
