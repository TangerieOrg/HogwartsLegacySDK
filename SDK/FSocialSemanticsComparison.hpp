#pragma once
#include <cstdint>
#include "EValueComparison.hpp"
#include "SocialSemanticIDs.hpp"
#pragma pack(push, 1)
struct FSocialSemanticsComparison {
    SocialSemanticIDs SocialSemantic; // 0x0
    EValueComparison ComparisonOperator; // 0x1
    char pad_2[0x2];
    int32_t ComparisonValue; // 0x4
}; // Size: 0x8
#pragma pack(pop)
