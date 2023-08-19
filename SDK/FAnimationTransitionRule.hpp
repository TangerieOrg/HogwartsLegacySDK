#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAnimationTransitionRule {
    FName RuleToExecute; // 0x0
    bool TransitionReturnVal; // 0x8
    char pad_9[0x3];
    int32_t TransitionIndex; // 0xc
}; // Size: 0x10
#pragma pack(pop)
