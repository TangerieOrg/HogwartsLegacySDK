#pragma once
#include <cstdint>
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UAnimInstance.hpp"
class ABP_TransfigurationPreviewPlacementAnimator_C;
struct FPoseLink;
#pragma pack(push, 1)
class UABP_TransfigurationPlaceDown_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2f8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x320
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x348
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x370
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x398
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x3c0
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1; // 0x3e8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x410
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x438
    FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x4b8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x4e8
    FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x568
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x598
    FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x618
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x648
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6c8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x6f8
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0x778
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7a8
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x828
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x858
    ABP_TransfigurationPreviewPlacementAnimator_C* PlacementAnimator; // 0x908
    int32_t SelectedAnim; // 0x910
    bool PlaceDownComplete; // 0x914
    char pad_915[0xb];
    static UABP_TransfigurationPlaceDown_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_4120AD794D27CE49AF1F02B0A930B772();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_051B8CFF45064601BFF0468A2B3AF2CB();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_710B6E30478BC906DAC337AF37347A01();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_TransfigurationPlaceDown_AnimGraphNode_TransitionResult_330310B7402253D0DF9F099347ED1411();
    void AnimNotify_PlacementImpact();
    void BlueprintUpdateAnimation0(float DeltaTimeX);
    void AnimNotify_PlaceDownFinished();
    void ExecuteUbergraph_ABP_TransfigurationPlaceDown(int32_t EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_GetSelectedAnimIndex_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetPreviewBounds_OutCenter, FVector CallFunc_GetPreviewBounds_OutExtent, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMaxElement_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
}; // Size: 0x920
#pragma pack(pop)
