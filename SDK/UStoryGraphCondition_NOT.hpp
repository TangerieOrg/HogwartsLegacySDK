#pragma once
#include <cstdint>
#include "UStoryGraphConditionProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphCondition_NOT : public UStoryGraphConditionProvider {
public:
    UStoryGraphConditionProvider* ConditionToInvert; // 0x28
    static UStoryGraphCondition_NOT* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
