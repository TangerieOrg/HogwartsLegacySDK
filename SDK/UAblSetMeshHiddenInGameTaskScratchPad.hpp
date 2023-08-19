#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class UAblSetMeshHiddenInGameTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    USkeletalMeshComponent* SkeletalMeshComponent; // 0x28
    bool OriginalHiddenValue; // 0x30
    char pad_31[0x7];
    static UAblSetMeshHiddenInGameTaskScratchPad* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
