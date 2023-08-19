#pragma once
#include <cstdint>
#include "FAnimationStateBase.hpp"
#include "FAnimationTransitionRule.hpp"
#pragma pack(push, 1)
struct FAnimationState : public FAnimationStateBase {
    TArray<FAnimationTransitionRule> Transitions; // 0x8
    int32_t StateRootNodeIndex; // 0x18
    int32_t StartNotify; // 0x1c
    int32_t EndNotify; // 0x20
    int32_t FullyBlendedNotify; // 0x24
}; // Size: 0x28
#pragma pack(pop)
