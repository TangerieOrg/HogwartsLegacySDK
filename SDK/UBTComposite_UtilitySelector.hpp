#pragma once
#include <cstdint>
#include "EUtilitySelectionMethod.hpp"
#include "UBTCompositeNode.hpp"
#pragma pack(push, 1)
class UBTComposite_UtilitySelector : public UBTCompositeNode {
public:
    char pad_90[0x8];
    EUtilitySelectionMethod SelectionMethod; // 0x98
    char pad_99[0x3];
    float WeightThreshold; // 0x9c
    bool bIgnoreRank; // 0xa0
    char pad_a1[0x4f];
    static UBTComposite_UtilitySelector* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
