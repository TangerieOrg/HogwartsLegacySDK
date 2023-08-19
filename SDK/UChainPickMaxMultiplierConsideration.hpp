#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainPickMaxMultiplierConsideration : public UQualifierConsideration {
public:
    TArray<UQualifierConsideration*> Considerations; // 0x28
    static UChainPickMaxMultiplierConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
