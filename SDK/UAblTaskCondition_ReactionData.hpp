#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblTaskCondition_ReactionData : public UAblTaskCondition {
public:
    bool bCompareImpactDirectionWithActorForward; // 0x28
    char pad_29[0x3];
    float ImpactDotForwardMin; // 0x2c
    float ImpactDotForwardMax; // 0x30
    char pad_34[0x4];
    FGameplayTagContainer RequiredMunitionTags; // 0x38
    FGameplayTagContainer UnallowedMunitionTags; // 0x58
    static UAblTaskCondition_ReactionData* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
