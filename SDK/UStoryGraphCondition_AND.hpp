#pragma once
#include <cstdint>
#include "UStoryGraphConditionProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphCondition_AND : public UStoryGraphConditionProvider {
public:
    TArray<UStoryGraphConditionProvider*> Conditions; // 0x28
    static UStoryGraphCondition_AND* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
