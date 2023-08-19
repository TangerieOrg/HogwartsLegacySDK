#pragma once
#include <cstdint>
#include "UStoryGraphConditionProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphCondition_ByStat : public UStoryGraphConditionProvider {
public:
    FName StatName; // 0x28
    int32_t StatValue; // 0x30
    char pad_34[0x4];
    static UStoryGraphCondition_ByStat* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
