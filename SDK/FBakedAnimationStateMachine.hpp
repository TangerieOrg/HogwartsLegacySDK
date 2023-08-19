#pragma once
#include <cstdint>
#include "FAnimationTransitionBetweenStates.hpp"
#include "FBakedAnimationState.hpp"
#pragma pack(push, 1)
struct FBakedAnimationStateMachine {
    FName MachineName; // 0x0
    int32_t InitialState; // 0x8
    char pad_c[0x4];
    TArray<FBakedAnimationState> States; // 0x10
    TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
}; // Size: 0x30
#pragma pack(pop)
