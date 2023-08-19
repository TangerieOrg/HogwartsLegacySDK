#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainInvertMultiplierConsideration : public UQualifierConsideration {
public:
    UQualifierConsideration* Consideration; // 0x28
    static UChainInvertMultiplierConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
