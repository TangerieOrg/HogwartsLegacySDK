#pragma once
#include <cstdint>
#include "ESexType.hpp"
#include "UStoryGraphConditionProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphCondition_ByGender : public UStoryGraphConditionProvider {
public:
    ESexType PlayerGender; // 0x28
    char pad_29[0x7];
    static UStoryGraphCondition_ByGender* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
