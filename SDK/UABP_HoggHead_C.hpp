#pragma once
#include <cstdint>
#include "FAnimNode_Root.hpp"
#include "FAnimNode_SequencePlayer.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_HoggHead_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x378
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3a8
    char pad_458[0x8];
    static UABP_HoggHead_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HoggHead(int32_t EntryPoint);
}; // Size: 0x460
#pragma pack(pop)
