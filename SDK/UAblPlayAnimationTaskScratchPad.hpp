#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
#pragma pack(push, 1)
class UAblPlayAnimationTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    char pad_28[0x10];
    TArray<void*> AbilityComponents; // 0x38
    TArray<void*> SingleNodeSkeletalComponents; // 0x48
    float EndTimeAdjust; // 0x58
    char pad_5c[0x7c];
    static UAblPlayAnimationTaskScratchPad* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
