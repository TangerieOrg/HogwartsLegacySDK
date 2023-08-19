#pragma once
#include <cstdint>
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimInstance.hpp"
struct FPoseLink;
class AActor;
class ABP_Clocktower_C;
#pragma pack(push, 1)
class UABP_GiantClock_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x378
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3a8
    char pad_458[0x8];
    static UABP_GiantClock_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void AnimNotify_NotifyWhoosh();
    void ExecuteUbergraph_ABP_GiantClock(int32_t EntryPoint, AActor* CallFunc_GetOwningActor_ReturnValue, ABP_Clocktower_C* K2Node_DynamicCast_AsBP_Clocktower, bool K2Node_DynamicCast_bSuccess);
}; // Size: 0x460
#pragma pack(pop)
