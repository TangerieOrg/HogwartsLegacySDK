#pragma once
#include <cstdint>
#include "FAnimNode_RandomPlayer.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_StateMachine.hpp"
#include "FAnimNode_StateResult.hpp"
#include "FAnimNode_TransitionResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimInstance.hpp"
struct FPoseLink;
#pragma pack(push, 1)
class UABP_HonkingDaffodils_C : public UAnimInstance {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
    FAnimNode_Root AnimGraphNode_Root; // 0x2c8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1; // 0x2f8
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320
    FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x348
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer_1; // 0x378
    FAnimNode_StateResult AnimGraphNode_StateResult_1; // 0x3f0
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer; // 0x420
    FAnimNode_StateResult AnimGraphNode_StateResult; // 0x498
    FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4c8
    bool IsHonking; // 0x578
    bool IsFinalStage; // 0x579
    char pad_57a[0x6];
    static UABP_HonkingDaffodils_C* StaticClass();
    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_ABP_HonkingDaffodils(int32_t EntryPoint);
}; // Size: 0x580
#pragma pack(pop)
