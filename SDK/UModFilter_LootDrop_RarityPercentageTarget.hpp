#pragma once
#include <cstdint>
#include "EValueComparison.hpp"
#include "UModFilter_LootDrop_Base.hpp"
#pragma pack(push, 1)
class UModFilter_LootDrop_RarityPercentageTarget : public UModFilter_LootDrop_Base {
public:
    EValueComparison ComparisonOperator; // 0x30
    char pad_31[0x3];
    float TargetPercent; // 0x34
    static UModFilter_LootDrop_RarityPercentageTarget* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
