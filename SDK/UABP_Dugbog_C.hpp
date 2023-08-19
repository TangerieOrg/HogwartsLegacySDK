#pragma once
#include <cstdint>
#include "FAnimNode_AbilityAnimPlayer.hpp"
#include "FAnimNode_IKMasterNode.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SaveCachedPose.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FAnimNode_UseCachedPose.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UEnemy_AnimInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_Dugbog_C : public UEnemy_AnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x690
    FAnimNode_Root AnimGraphNode_Root; // 0x698
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x6c8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1; // 0x6f0
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1; // 0x718
    FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x798
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1; // 0x7c8
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7f0
    FAnimNode_StateMachine AnimGraphNode_StateMachine_1; // 0x820
    FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x8d0
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1; // 0xa80
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xbd8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xc00
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0xc80
    FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0xcb0
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0xd60
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xd90
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xe40
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf98
    static UABP_Dugbog_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_5A37D81243D13AE1038CF7ADFBF69CFD();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_2D3A347D4700DDAD868F8F849FC71401();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dugbog_AnimGraphNode_TransitionResult_7A62C6CE45B8DD1F664CD59B7F4FEA43();
    void ExecuteUbergraph_ABP_Dugbog(int32_t EntryPoint, float CallFunc_GetRelevantAnimTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
}; // Size: 0xfc0
#pragma pack(pop)
