#pragma once
#include <cstdint>
#include "EVCType.hpp"
#pragma pack(push, 1)
struct FVCSlot {
    FString ID; // 0x0
    EVCType Type; // 0x10
    char pad_11[0x3];
    int32_t Quantity; // 0x14
    int32_t QuantityHigh; // 0x18
    char pad_1c[0x4];
    FString Quality; // 0x20
    FString QualityHigh; // 0x30
    bool ItemIsUnique; // 0x40
    char pad_41[0x3];
    int32_t ItemRandomWeight; // 0x44
    int32_t ItemWeightAdjust; // 0x48
    bool bShowInCurriculumRewards; // 0x4c
    char pad_4d[0x3];
    FName ItemType; // 0x50
}; // Size: 0x58
#pragma pack(pop)
