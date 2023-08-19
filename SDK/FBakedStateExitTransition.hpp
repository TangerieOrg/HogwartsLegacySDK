#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FBakedStateExitTransition {
    int32_t CanTakeDelegateIndex; // 0x0
    int32_t CustomResultNodeIndex; // 0x4
    int32_t TransitionIndex; // 0x8
    bool bDesiredTransitionReturnValue; // 0xc
    bool bAutomaticRemainingTimeRule; // 0xd
    char pad_e[0x2];
    TArray<int32_t> PoseEvaluatorLinks; // 0x10
}; // Size: 0x20
#pragma pack(pop)
