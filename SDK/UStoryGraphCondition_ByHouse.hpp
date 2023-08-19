#pragma once
#include <cstdint>
#include "EStoryGraphCondition_PlayerHouse.hpp"
#include "UStoryGraphConditionProvider.hpp"
#pragma pack(push, 1)
class UStoryGraphCondition_ByHouse : public UStoryGraphConditionProvider {
public:
    EStoryGraphCondition_PlayerHouse PlayerHouse; // 0x28
    char pad_2c[0x4];
    static UStoryGraphCondition_ByHouse* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
