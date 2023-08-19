#pragma once
#include <cstdint>
#include "FBakedStateExitTransition.hpp"
#pragma pack(push, 1)
struct FBakedAnimationState {
    FName StateName; // 0x0
    TArray<FBakedStateExitTransition> Transitions; // 0x8
    int32_t StateRootNodeIndex; // 0x18
    int32_t StartNotify; // 0x1c
    int32_t EndNotify; // 0x20
    int32_t FullyBlendedNotify; // 0x24
    bool bIsAConduit; // 0x28
    char pad_29[0x3];
    int32_t EntryRuleNodeIndex; // 0x2c
    TArray<int32_t> PlayerNodeIndices; // 0x30
    TArray<int32_t> LayerNodeIndices; // 0x40
    bool bAlwaysResetOnEntry; // 0x50
    char pad_51[0x7];
}; // Size: 0x58
#pragma pack(pop)
