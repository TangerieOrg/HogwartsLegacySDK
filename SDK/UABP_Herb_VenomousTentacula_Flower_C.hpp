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
class UABP_Herb_VenomousTentacula_Flower_C : public UAnimInstance {
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
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x460
    FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4e0
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x510
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x590
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x5c0
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0x640
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x670
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6f0
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x720
    int32_t NextIdleIndex; // 0x7d0
    int32_t RandomInt; // 0x7d4
    char pad_7d8[0x8];
    static UABP_Herb_VenomousTentacula_Flower_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_752356484CB71959F80A0DAC6338035C();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_6E79F63745781D99E147598F3C96FC46();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_32674CF2423BCCAEFF7F718DD27FB3B2();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_FE507A2D422580CE987CA4B13C5C9612();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_B89943474E726774F45F32BBB3B6CC31();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_90FA053043D08DC942673DA002B95E10();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_8108FFF84BE747C3BC832BAF2687E639();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower_AnimGraphNode_TransitionResult_35CD23564C280ED942172280B316D545();
    void AnimNotify_Idle_A_Enter();
    void AnimNotify_Idle_B_Enter();
    void AnimNotify_Idle_C_Enter();
    void AnimNotify_Idle_D_Enter();
    void ExecuteUbergraph_ABP_Herb_VenomousTentacula_Flower(int32_t EntryPoint, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, float CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_RandomIntegerInRange_ReturnValue);
}; // Size: 0x7e0
#pragma pack(pop)
