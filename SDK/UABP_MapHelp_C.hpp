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
class UABP_MapHelp_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2f8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x320
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x348
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x370
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x398
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3c0
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3e8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1; // 0x410
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x438
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x460
    FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4e0
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x510
    FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x590
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x5c0
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x640
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x670
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0x6f0
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x720
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7a0
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7d0
    bool OpenBook; // 0x880
    bool ReceivePage; // 0x881
    bool CatchPage; // 0x882
    bool CatchPageAgain; // 0x883
    bool InCatch; // 0x884
    char pad_885[0xb];
    static UABP_MapHelp_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_0743C530449AA96914EF558D57AAC911();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_AB6D13DD44D4C0A6E17BD296C87780E0();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_1529A0824F81BD24F1BEB7A0EACC8AAF();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_MapHelp_AnimGraphNode_TransitionResult_B70D79314F1B87A09EA11F86B98175BE();
    void AnimNotify_OpenStarted();
    void AnimNotify_ReceiveStarted();
    void SetCatchPage();
    void AnimNotify_Catch_Entered();
    void AnimNotify_Catch_Left();
    void AnimNotify_CatchAgain_Entered();
    void ExecuteUbergraph_ABP_MapHelp(int32_t EntryPoint, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3);
}; // Size: 0x890
#pragma pack(pop)
