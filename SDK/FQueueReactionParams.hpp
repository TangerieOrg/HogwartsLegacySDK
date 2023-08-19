#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FQueueReactionParams {
    float Duration; // 0x0
    FVector ImpactDirection; // 0x4
    FVector ImpactLocation; // 0x10
    FVector InitialVelocity; // 0x1c
    FVector TargetPosition; // 0x28
    FVector TargetDirection; // 0x34
    char pad_40[0x10];
    bool bActiveAbilityOwnsPassives; // 0x50
    char pad_51[0x7];
    FGameplayTagContainer MunitionTags; // 0x58
}; // Size: 0x78
#pragma pack(pop)
