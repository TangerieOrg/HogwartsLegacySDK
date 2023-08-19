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
class UABP_PaperAndQuill_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x2f8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x320
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x348
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x370
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x398
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x3c0
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x3e8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x410
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x438
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x460
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x488
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x4b0
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x4d8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x500
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x528
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x550
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1; // 0x578
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5a0
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5c8
    FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x648
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x678
    FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x6f8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x728
    FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x7a8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x7d8
    FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x858
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x888
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x908
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x938
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0x9b8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9e8
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa68
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa98
    bool DisappearPage; // 0xb48
    bool CollectPage; // 0xb49
    bool Accio; // 0xb4a
    bool Hit; // 0xb4b
    bool HitAgain; // 0xb4c
    bool InHit; // 0xb4d
    char pad_b4e[0x2];
    static UABP_PaperAndQuill_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_3981D324470AF618F324E59C57ED6F96();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_C53472604BB9C2892F6411AFBDC80169();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PaperAndQuill_AnimGraphNode_TransitionResult_143541534A8F66F545DEB48B2B284F33();
    void AccioPull();
    void HitByOtherSpell();
    void AnimNotify_HitBySpell_Entered();
    void AnimNotify_HitBySpellAgain_Entered();
    void AnimNotify_HitBySpell_Left();
    void ExecuteUbergraph_ABP_PaperAndQuill(int32_t EntryPoint, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2);
}; // Size: 0xb50
#pragma pack(pop)
