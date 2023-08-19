#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
class UClass;
#pragma pack(push, 1)
struct FComboSplitData {
    int32_t SplitFrame; // 0x0
    int32_t TimeOutFrame; // 0x4
    UClass* SplitToAbilityBeforeFrame; // 0x8
    UClass* SplitToAbilityAfterFrame; // 0x10
    FGameplayTagContainer PerksRequiredForPauseCombo; // 0x18
}; // Size: 0x38
#pragma pack(pop)
