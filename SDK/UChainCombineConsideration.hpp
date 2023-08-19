#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainCombineConsideration : public UQualifierConsideration {
public:
    TArray<UQualifierConsideration*> Considerations; // 0x28
    bool bCounterbalanceScoreDegradation; // 0x38
    char pad_39[0x7];
    static UChainCombineConsideration* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
