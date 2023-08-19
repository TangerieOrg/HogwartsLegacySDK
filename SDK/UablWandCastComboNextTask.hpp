#pragma once
#include <cstdint>
#include "EWandComboType\Type.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UClass;
#pragma pack(push, 1)
class UablWandCastComboNextTask : public UAblAbilityTask {
public:
    EWandComboType::Type ComboType; // 0x70
    char pad_71[0x7];
    UClass* NextComboAbility; // 0x78
    FGameplayTagContainer PerksRequiredForPauseCombo; // 0x80
    UClass* PauseComboAbility; // 0xa0
    int32_t FinisherAtFrame; // 0xa8
    int32_t ResetAtFrame; // 0xac
    UClass* NextLightComboAbility; // 0xb0
    static UablWandCastComboNextTask* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
