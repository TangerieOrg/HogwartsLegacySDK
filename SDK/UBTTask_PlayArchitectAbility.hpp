#pragma once
#include <cstdint>
#include "EInteractionProject.hpp"
#include "FGameplayTagContainer.hpp"
#include "UBTTask_PlayAbilityBase.hpp"
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UBTTask_PlayArchitectAbility : public UBTTask_PlayAbilityBase {
public:
    UInteractionArchitectAsset* InteractionArchitectAsset; // 0xc0
    EInteractionProject Project; // 0xc8
    char pad_c9[0x7];
    FGameplayTagContainer SourceTags; // 0xd0
    FGameplayTagContainer TargetTags; // 0xf0
    static UBTTask_PlayArchitectAbility* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
