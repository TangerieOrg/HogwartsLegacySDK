#pragma once
#include <cstdint>
#include "FAkExternalSourceInfo.hpp"
#include "FAnimNode_AbilityAnimPlayer.hpp"
#include "FAnimNode_IKMasterNode.hpp"
#include "FAnimNode_RequestedLayerBlend.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UEnemy_AnimInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_Spider_C : public UEnemy_AnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x690
    FAnimNode_Root AnimGraphNode_Root; // 0x698
    FAnimNode_AbilityAnimPlayer AnimGraphNode_AbilityAnimPlayer; // 0x6c8
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x778
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7a8
    char pad_858[0x8];
    FAnimNode_RequestedLayerBlend AnimGraphNode_RequestedLayerBlend; // 0x860
    FAnimNode_IKMasterNode AnimGraphNode_IKMasterNode; // 0x910
    static UABP_Spider_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void AnimNotify_StartupAbility();
    void BlueprintBeginPlay();
    void AnimNotify_spider_allert();
    void AnimNotify_spider_bite();
    void AnimNotify_spider_clicking();
    void AnimNotify_spider_die();
    void AnimNotify_spider_hiss();
    void AnimNotify_spider_hurt();
    void AnimNotify_spider_one_step();
    void AnimNotify_spider_one_step_squishy();
    void AnimNotify_spider_warning();
    void AnimNotify_spider_hiss_n_click();
    void AnimNotify_spider_bite_stab();
    void AnimNotify_spider_short_atk();
    void AnimNotify_spider_jump();
    void AnimNotify_spider_allert_random();
    void ExecuteUbergraph_ABP_Spider(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, TArray<FAkExternalSourceInfo>& Temp_struct_Variable_1);
}; // Size: 0xac0
#pragma pack(pop)
